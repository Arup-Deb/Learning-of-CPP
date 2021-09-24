#include <iostream>
using namespace std;
/*
float Funavg( float a, float b){
	float avg = (a+b)/2;
	return avg;
};

float Funavg2( float a, float b){
	float avg = (a+b)/2;
	return avg;
};
int main()
{
	float p,q;
	p = Funavg(2, 4.1);
	cout<<"The average of these numbers is "<<p<<endl;

	q = Funavg2(4, 9.1);
	cout<<"The average of these numbers is "<<q<<endl;
	return 0;
}
*/

template<class T>
void swapp(T &a, T &b)
{
	T temp =a;
	a = b;
	b = temp;
}
template< class T1, class T2>
float Funavg( T1 a, T2 b){
	float avg = (a+b)/2;
	return avg;
};

int main()
{
float a;
  a = 	Funavg(2.78, 45.77);
	cout<<"The average of these numbers is "<<a<<endl;
	int x=6,y=9;
	swapp(x,y);
	cout<<x<<endl<<y;
	return 0;
}

