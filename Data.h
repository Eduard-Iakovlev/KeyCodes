#pragma once
#include <iostream>

class Data{
public:
	void request();
	void data_enter();
	char print_simbol();
	int print_code();
	void clear_simbol();
	int bit();
private:
	char _simbol;
	int _size;
	int _space = 10;
};

