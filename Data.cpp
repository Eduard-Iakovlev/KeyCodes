#include "Data.h"
#include "conio.h"
#include <string>


void Data::request(){
	setlocale(LC_ALL, "");
	std::cout << "  Нажмите нужную клавишу:" << std::endl;
	setlocale(0, "C");
	std::cout << " ============================\n";

}

void Data::data_enter(){
	std::cout << " |  ";
	_simbol = _getch();
	switch(_simbol)	{
	case 27:
		std::cout << "Esc       ||";
		break;
	case 9:
		std::cout << "Tab       ||";
		break;
	case 13:
		std::cout << "Enter     ||";
		break;
	case 32:
		std::cout << "Space     ||";
		break;
	case 8:
		std::cout << "Backspace ||";
		break;
	default:
		std::cout << print_simbol() << "         ||";
		break;
	}
	if (print_code() < 0) --_space -= bit();
	else _space -= bit();
	while (_space > 0) {
		std::cout << " ";
		--_space;
	}
	std::cout << print_code() << "  |";
	std::cout << "\n ============================";
	_space = 10;
}

char Data::print_simbol(){
	return _simbol;
}

int Data::print_code(){
	return (int)_simbol;
}

void Data::clear_simbol(){
	_simbol = '\0';
}

int Data::bit(){
	int code = print_code();
	int i = 0;
	for (; code; code /= 10) i++;
	return i;
}
