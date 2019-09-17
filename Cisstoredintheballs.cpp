#include <iostream>
#include "Constants.h"

using namespace std;
using namespace myConstants;

double getHeight() {
	cout << "Enter the height of the tower in meters: " << '\n';
	double towerHeight{};
	cin >> towerHeight;

	return towerHeight;
}

double calculate(double towerHeight, int seconds) {
	double distanceFallen = (gravity * (seconds * seconds) / 2);
	double heightFromGround = towerHeight - distanceFallen;

	return heightFromGround;
}

void printTimes(int seconds, double height) {
	if (height >= 0) {
		cout << "The ball is " << height << " meters above the ground." << '\n';
	}
	else cout << "The ball is on the ground." << '\n';

}

void finalCalculation(double towerHeight, int seconds) {
	double height{ calculate(towerHeight, seconds) };
	printTimes(height, seconds);
}


int main() {
	const double towerHeight { getHeight() };
	finalCalculation(towerHeight, 0);
	finalCalculation(towerHeight, 1);
	finalCalculation(towerHeight, 2);
	finalCalculation(towerHeight, 3);
	finalCalculation(towerHeight, 4);
	finalCalculation(towerHeight, 5);
	return 0;
}