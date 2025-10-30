#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>

int getInputMode(){
	int mode = -1;
	std::cout << "Select action:\n";
	std::cout << "1. Read tasks\n";
	std::cout << "2. Write task\n";
	std::cout << "Other: Exit\n";

	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Enter action: ";	
	std::cin >> mode;

	std::cout << "\n";
	
	return mode;
}

void writeFile(){
	std::cout << "---------------------------------------------------------------\n";
	std::ofstream ouf { "tasks.txt", std::ios::app };
	if (!ouf){
		std::cout << "Couldn't open file\n";
		return;
	}
	std::string line;
	std::cin.ignore();
	std::getline (std::cin, line);
	ouf << line << "\n";
	std::cout << "---------------------------------------------------------------\n";
}
 
void readFile(){
	std::cout << "---------------------------------------------------------------\n";
	std::ifstream inf { "tasks.txt" }; 
	if (!inf){
		std::cout << "Couldn't open file\n";
		return;
	}
	std::string line;
	while(std::getline(inf, line)){
		std::cout << line << "\n";
	}
	std::cout << "---------------------------------------------------------------\n";
}	
