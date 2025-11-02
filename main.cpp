#include "functions.h"
#include <iostream>
#include <fstream>

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
			case 4:
				{std::ofstream file("tasks.txt");
    				file.close();
				break;}
			default:
				std::cout << "exit\n";
				return 0;
		}	
	}
}

		 
