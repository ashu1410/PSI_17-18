#pragma once

struct Possibilities {
	int var1, var2;
	int output;
	Possibilities(int _var1, int _var2, int _output) {
		this->var1 = _var1;
		this->var2 = _var2;
		this->output = _output; //expected output
	}
	Possibilities() {};

	static void printExpected() {
		cout << "0 && 0   " << "0 && 1   " << "1 && 0   " << "1 && 1   " << endl;
		cout << "Oczekiwany rezultat:\n";
		cout << "    0    " << "    0    " << "    0    " << "    1    " << endl;
	}
};