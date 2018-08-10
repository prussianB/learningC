#include <iostream>
using namespace std;

class BaranClass{
public:
	void babyCode(){
		int i;
		for (i = 1; i <= 10; i++){
			cout << i << endl;
		}

	}
};


int main() {

	BaranClass  BaranObject;
	BaranObject.babyCode();




	getchar();
	return 0;
}