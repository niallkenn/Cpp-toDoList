#include "functions.h"
#include <iostream>

int main(){
	while (1){
		int mode = getInputMode();
		
		switch (mode){
			case 1:
				readFile();
				break;
			case 2:
				writeFile();
				break;
			case 3:
				deleteTask();
				break;
			default:
				std::cout << "exit\n";
				return 0;
		}	
	}
}

		 
