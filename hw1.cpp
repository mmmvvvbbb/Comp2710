//Matthew Bonsall
//MVB0005
//Compiled using g++ compiler
//test

#include <iostream>
using namespace std;

const double RATIO = 0.001;

int main() {
	double lethal_amount, mouse_weight, your_weight, threshold;
	cout << "What is the amount of artificial sweetener needed to kill a mouse: ";	
	cin >> lethal_amount;
	cout << "\nWhat is the weight of the mouse: ";
	cin >> mouse_weight;
	cout << "\nWhat is the weight of the dieter: ";
	cin >> your_weight;
	threshold = lethal_amount/RATIO * your_weight/mouse_weight;
	cout << "\nYou can drink " << threshold << " diet soda without dying as a result.\n";
	return 0;
}
