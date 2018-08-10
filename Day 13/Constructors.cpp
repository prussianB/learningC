#include <iostream>
#include <string>
using namespace std;

class BaranC {
public:
	 BaranC(string z) {
		setName(z);
	}
	void setName(string x){
		name = x;
	}
	string getName() {
		return name;
	}

private:
	string name;
};



int main() {

	BaranC bo("Yohoho ben slime canavariyim.");
	cout << bo.getName() << endl;

	BaranC bo2("Mwhahahaha I'm the slime monster.");
	cout << bo2.getName() << endl;

	getchar();
	return 0;
}