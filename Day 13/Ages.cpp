#include <iostream>
using namespace std;

int main() {

	int age;
	int count = 0;
	int ageTotal = 0;

	cout << "Enter the age. Type '-1' to quit." << endl;
	cin >> age;

	while (age != -1){
		ageTotal = ageTotal + age;
		count++;

		cout << "Enter the age. Type '-1' to quit." << endl;
		cin >> age;

	}

	cout << "Number of entries is" << count << endl;
	cout << "Average age is" << ageTotal / count << endl;

	getchar();

	return 0;
}