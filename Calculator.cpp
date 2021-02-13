#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


enum Operator { Add, Subtract, Multiply, Divide };

void displayInstructions();
int calculate(Operator mathOperator, int firstOperand, int secondOperand);

int main() {

	displayInstructions();

	int firstOperand = 1;
	string mathOperator = "+";
	int secondOperand = 1;

	cout << "Enter expression: ";
	cin >> firstOperand;
	cin >> mathOperator;
	cin >> secondOperand;

	while (firstOperand + secondOperand != 0) {
		Operator op = Operator::Add;
		if (mathOperator == "+") {
			op = Operator::Add;
		}
		else if (mathOperator == "-") {
			op = Operator::Subtract;
		}
		else if (mathOperator == "*") {
			op = Operator::Multiply;
		}
		else if (mathOperator == "/") {
			op = Operator::Divide;
		}
		else {
			cout << "Input error" << endl;
			break;
		}

		cout << firstOperand << " " << mathOperator << " " << secondOperand
			<< " = " << calculate(op, firstOperand, secondOperand) << endl;

		cout << "Enter expression: ";
		cin >> firstOperand;
		cin >> mathOperator;
		cin >> secondOperand;

		cout << firstOperand << " " << mathOperator << " " << secondOperand << endl;
	}
	cout << "Goodbye!" << endl;
	system("pause");
	return 0;
}

int calculate(Operator mathOperator, int firstOperand, int secondOperand) {

	//The different operations can be done.
	//using either an if/else chain or a switch statement.
		
	//We're going to use a switch statement in this case,
	//because it looks a little more neat and easy to read.

	//4 different cases, one for each of the basic mathematical operations
	switch (mathOperator) {
		case Operator::Add:
			return firstOperand + secondOperand;
		case Operator::Subtract:
			return firstOperand - secondOperand;
		case Operator::Multiply:
			return firstOperand * secondOperand;
		case Operator::Divide:
			return firstOperand / secondOperand;
		
	}
	
	
}

void displayInstructions() {
	cout << "This program evaluates binary arithmetic" << endl;
	cout << "operations. Type an expression using two" << endl;
	cout << "integers and one of the operators + - * /" << endl;
	cout << "Put one space between each item in the" << endl;
	cout << "expression. Example: 2 + 3" << endl;
	cout << "To end the calculations, type 0 + 0" << endl;
}