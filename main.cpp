#include <iostream>

using namespace std;

double doubleGetter() {

	
	cout << "Enter a double value: " << '\n';
	double userValue{};
	cin >> userValue;

	return userValue;
}

char operationGetter() {

	cout << "Enter an operation: +, -, *, or / ";
	char op{};
	cin >> op;
	return op;
}

void performOperation (double x, double y, char operation) {

	if (operation == '+') {
		cout << x << " + " << y << " is " << x + y << '\n';
	}
	else if (operation == '-') {
		cout << x << " - " << y << " is " << x - y << '\n';
	}
	else if (operation == '*') {
		cout << x << " * " << y << " is " << x * y << '\n';
	}
	else if (operation == '/' ) {
		cout << x << " / " << y << " is " << x / y << '\n';
	}
	else {
		cout << "Hey, that wasn't an operation!" << '\n';
	}
}

int main() {
	double x{ doubleGetter() };
	double y{ doubleGetter() };
	char op{ operationGetter() };

	performOperation(x,y,op);
	return 0;
}