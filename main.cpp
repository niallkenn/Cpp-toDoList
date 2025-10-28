#include "functions.h"
#include <fstream>
#include <iostream>

int main(){
	while (1){
		int mode = getInputMode();
		
		switch (mode){
			case 1:
				std::cout << "read\n";
				break;
			default:
				std::cout << "exit\n";
				return 0;
		}	
	}
}

		 
