#include "functions.h"
#include <iostream>

int getInputMode(){
	int mode = -1;
	std::cout << "Select action:\n1. Read tasks\n";
	
	std::cout << "\nOther: Exit\n";
	
	std::cin >> mode;
	
	return mode;
}	
