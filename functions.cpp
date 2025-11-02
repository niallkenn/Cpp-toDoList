#include "functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdio>

int getInputMode(){
	int mode = -1;
	std::cout << "Select action:\n";
	std::cout << "1. Read tasks\n";
	std::cout << "2. Write task\n";
	std::cout << "3. Delete task\n";
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
	int i = 1; 
	if (!inf){
		std::cout << "Couldn't open file\n";
		return;
	}
	std::string line;
	while(std::getline(inf, line)){
		std::cout << i << ". " << line << "\n";
		i++;
	}
	std::cout << "---------------------------------------------------------------\n";
}

int isNumber(std::string str){
        for (int i=0;i<size(str) - 1;i++){
              if(!std::isdigit(str[i])) return 0;
        }
        return 1;
}

void deleteTask(){
	readFile();
	std::string lineNum;
	std::string line;

	std::cout << "Enter line number:\n";
	std::cin >> lineNum;
	
	std::ifstream inf { "tasks.txt"};
	std::vector<std::string> tasks = {};
	while(std::getline(inf, line)){
		tasks.push_back(line + "\n");
	}
	inf.close();
	remove("tasks.txt");
	while(!isNumber(lineNum)){
		std::cin >> lineNum;
	}
	
	std::ofstream ouf { "tasks.txt", std::ios::app };
	int num = std::stoi(lineNum);
	
	for (int i = 0;i<size(tasks);i++){
		if(i + 1 != num) ouf << tasks[i]; 
	}
} 
