#include <iostream>
#include <string>
#include <map>

class Translate {
public:
	Translate();
	void PrintMorseCode();
	std::string MorseToLetter(std::string Morse);
	std::string LetterToMorse(std::string Letter);

private:
	std::map<std::string, std::string> MorseCode;
};

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
	MorseCode["A"] = "._";
	MorseCode["B"] = "_...";
	MorseCode["C"] = "_._.";
	MorseCode["D"] = "_..";
	MorseCode["E"] = ".";
	MorseCode["F"] = ".._.";
	MorseCode["G"] = "__.";
	MorseCode["H"] = "....";
	MorseCode["I"] = "..";
	MorseCode["J"] = ".___";
	MorseCode["K"] = "_._";
	MorseCode["L"] = "._..";
	MorseCode["M"] = "__";
	MorseCode["N"] = "_.";
	MorseCode["O"] = "___";
	MorseCode["P"] = ".__.";
	MorseCode["Q"] = "__._";
	MorseCode["R"] = "._.";
	MorseCode["S"] = "...";
	MorseCode["T"] = "_";
	MorseCode["U"] = ".._";
	MorseCode["V"] = "..._";
	MorseCode["W"] = ".__";
	MorseCode["X"] = "_.._";
	MorseCode["Y"] = "_.__";
	MorseCode["Z"] = "__..";

	MorseCode["1"] = ".____";
	MorseCode["2"] = "..___";
	MorseCode["3"] = "...__";
	MorseCode["4"] = "...._";
	MorseCode["5"] = ".....";
	MorseCode["6"] = "_....";
	MorseCode["7"] = "__...";
	MorseCode["8"] = "___..";
	MorseCode["9"] = "____.";
	MorseCode["0"] = "_____";

	MorseCode["?"] = "..__..";
	MorseCode["!"] = "_._.__";
	MorseCode["."] = "._._._";
	MorseCode[","] = "__..__";
	MorseCode[";"] = "_._._.";
	MorseCode[":"] = "___...";
	MorseCode["+"] = "._._.";
	MorseCode["-"] = "_...._";
	MorseCode["/"] = "_.._.";
	MorseCode["="] = "_..._";
}



int main()
{
	std::string Test = "._";
	Translate newTranslation;
	std::cout << newTranslation.MorseToLetter(Test);


	return 0;
}