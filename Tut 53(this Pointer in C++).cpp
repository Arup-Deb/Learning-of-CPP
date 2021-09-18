#include <iostream>
using namespace std;

class A{
	int a;
public:
	void setData(int a){
a=a;
	}

	void getData(){
		cout<<"The value of a is "<<a;
	}
};

int main()
{
	A a;
	a.setData(4);
	a.getData();
	return 0;
}
