#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
	int num, sys, number;
	char answer = 'Y';
	while (answer == 'Y' || answer == 'y') {
		cout << "Enter the number that you want to convert: ";
		cin >> num;
		cout << "Enter the system in which it shoud be converted: ";
		cin >> sys;
			cout << endl << "Here is your uber in " << sys << " system: " << endl;
		while (num > 0) {
			number = num % sys;
			cout << number;
			num = num / sys;
		}
		cout << endl;
		cout << "If you want to countinue type Y or y:";
		cin >> answer;
		cout << endl;
	}

	system("pause");
	return 0;
}
