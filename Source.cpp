#include <iostream>
#include "Perceptron.h"
#include "Possibilities.h"
using namespace std;

void main() {
	Possibilities *pos = new Possibilities[4];
	pos[0].var1 = 0; pos[0].var2 = 0; pos[0].output = 0;
	pos[1].var1 = 1; pos[1].var2 = 0; pos[1].output = 0;
	pos[2].var1 = 0; pos[2].var2 = 1; pos[2].output = 0;
	pos[3].var1 = 1; pos[3].var2 = 1; pos[3].output = 1;


	int numOfTrainSesh = 111225; //sesje uczenia
	int bias = 1;
	double lRate = 1;
	int size=4;
	int inputs = 2;

	int t1[] = { bias,0,0 };
	int t2[] = { bias,0,1 };
	int t3[] = { bias,1,0 };
	int t4[] = { bias,1,1 };

	Perceptron *perceptron = new Perceptron(inputs);

	for (int i = 0; i < numOfTrainSesh; i++) {
		for (int j = 0; j < size; j++) {
			int values[] = { bias, pos[j].var1, pos[j].var2 };
			perceptron->train(values, pos[j].output, lRate);
		}

	}

	Possibilities::printExpected();
	cout << "Wynik dzia³ania programu"<<endl;
	cout << "    "<<perceptron->addInputs(t1) << "        " << perceptron->addInputs(t2) << "        " << perceptron->addInputs(t3) << "        " << perceptron->addInputs(t4) << endl;
	

	system("PAUSE");

}