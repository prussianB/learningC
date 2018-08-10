#include iostream
#include string
using namespace std;

class BaranC {
public
	void setName(string x){
		name = x;
	}
	string getName() {
		return name;
	}

private
	string name;
};



int main() {

	BaranC bo;

	bo.setName(Seni sansli araba!n);
	cout  bo.getName();

	getchar();
	return 0;
}