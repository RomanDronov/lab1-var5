#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
	int num, sys, num10;
	cout << "Enter the number that you want to convert: ";
	cin >> num;
	cout<< "Enter the system in which it shoud be converted: ";
	cin >> sys;
	cout << endl << "Here is your nuber in " << sys << " system: "<<endl;
	while (num > 0) {
		num10 = num % sys;
		cout << num10;
		num = num / sys;
	}
	return 0;
}