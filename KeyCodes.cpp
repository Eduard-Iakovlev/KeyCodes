#include <iostream>
#include "Windows.h"
#include "Data.h"
#include <conio.h>

int main(){
	Data data;
	data.request();
	while (true) {
		data.data_enter();
		data.clear_simbol();
		if (_getch() == 27) break;
		else {
			std::cout << std::endl;
			continue;
		}
	}
}
