#include <iostream>
#include <string>
#include <map>
#include <sstream>

class Translate {
public:
	Translate();
	void PrintMorseCode();
	void MorseToWord(std::string Morse);

private:
	std::string MorseToLetter(std::string Morse);
	std::string LetterToMorse(std::string Letter);
	std::map<std::string, std::string> MorseCode;
};

// Main Conversions
void Translate::MorseToWord(std::string Morse) {
	std::istringstream iss(Morse);
	std::string ConvertedString;
	std::string currentMorse;
	while (iss >> currentMorse)
	{
		if (currentMorse == "/") {
			std::cout << " ";
			continue;
		}
		ConvertedString = MorseToLetter(currentMorse);
		if (ConvertedString != "Error") {
			std::cout << ConvertedString;
		}
	}
}


// Conversions
std::string Translate::MorseToLetter(std::string Morse) {
	for (auto i : MorseCode) {
		if (i.second == Morse) {
			return i.first;
		}
	}
	return "Error";
}

std::string Translate::LetterToMorse(std::string Letter)
{
	if (MorseCode.find(Letter) == MorseCode.end()) {
		return "Error";
	}
	else {
		return MorseCode[Letter];
	}
}

void Translate::PrintMorseCode() {
	for (auto i : MorseCode) {
		std::cout << i.first << " " << i.second << std::endl;
	}
}

Translate::Translate() {
	MorseCode["A"] = ".-";
	MorseCode["B"] = "-...";
	MorseCode["C"] = "-.-.";
	MorseCode["D"] = "-..";
	MorseCode["E"] = ".";
	MorseCode["F"] = "..-.";
	MorseCode["G"] = "--.";
	MorseCode["H"] = "....";
	MorseCode["I"] = "..";
	MorseCode["J"] = ".---";
	MorseCode["K"] = "-.-";
	MorseCode["L"] = ".-..";
	MorseCode["M"] = "--";
	MorseCode["N"] = "-.";
	MorseCode["O"] = "---";
	MorseCode["P"] = ".--.";
	MorseCode["Q"] = "--.-";
	MorseCode["R"] = ".-.";
	MorseCode["S"] = "...";
	MorseCode["T"] = "-";
	MorseCode["U"] = "..-";
	MorseCode["V"] = "...-";
	MorseCode["W"] = ".--";
	MorseCode["X"] = "-..-";
	MorseCode["Y"] = "-.--";
	MorseCode["Z"] = "--..";

	MorseCode["1"] = ".----";
	MorseCode["2"] = "..---";
	MorseCode["3"] = "...--";
	MorseCode["4"] = "....-";
	MorseCode["5"] = ".....";
	MorseCode["6"] = "-....";
	MorseCode["7"] = "--...";
	MorseCode["8"] = "---..";
	MorseCode["9"] = "----.";
	MorseCode["0"] = "-----";

	MorseCode["?"] = "..--..";
	MorseCode["!"] = "-.-.--";
	MorseCode["."] = ".-.-.-";
	MorseCode[","] = "--..--";
	MorseCode[";"] = "-.-.-.";
	MorseCode[":"] = "---...";
	MorseCode["+"] = ".-.-.";
	MorseCode["-"] = "-....-";
	MorseCode["/"] = "-..-.";
	MorseCode["="] = "-...-";
}



int main()
{
	std::cout << "Morse Code Translator. \n'-' = dash, '.' = dot, '/' = space \nPlease input your morse code: " << std::endl;
	std::string Morse;
	getline(std::cin, Morse);
	Translate newTranslation;

	std::cout << "Transated Text: ";
	newTranslation.MorseToWord(Morse);


	return 0;
}