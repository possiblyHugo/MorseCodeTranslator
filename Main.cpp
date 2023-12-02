#include <iostream>
#include <string>
#include <map>

class Translate {
	Translate();
	void PrintMorseCode();

private:
	std::map<std::string, std::string> MorseCode;
};

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

	for (auto i : MorseCode) {
		std::cout << i.first << " " << i.second << std::endl;
	}


	return 0;
}