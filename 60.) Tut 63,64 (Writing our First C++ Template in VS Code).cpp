//////////////////////////// not using  Template////////////////////////////

/*
#include <iostream>
using namespace std;
class vector
{
public: 
	int * arr;
	int size;
public:
	vector(int m)
	{
		size = m;
		arr = new int[size];

	}
	   int dotProduct(vector &v)
	{
		int d = 0;
		for (int i = 0; i < size; i++)
		{
			d += this->arr[i] * v.arr[i];
			
		} 
		return d;
	}
};

int main()
{
	vector v1(3);
	v1.arr[0] = 4;
	v1.arr[1] = 3;
	v1.arr[2] = 1;

	vector v2(3);
	v2.arr[0] = 1;
	v2.arr[1] = 0;
	v2.arr[2] = 1;
	int a = v1.dotProduct(v2);
	cout<<a<<endl;
	return 0;
	
	
}
*/




////////////////////////////using  Template////////////////////////////

#include <iostream>
using namespace std;
template <class T>
class vector
{
public: 
	T * arr;
	int size;
public:
	vector(int m)
	{
		size = m;
		arr = new T[size];

	}
	   T dotProduct(vector &v)
	{
		T d = 0;
		for (int i = 0; i < size; i++)
		{
			d += this->arr[i] * v.arr[i];
			
		} 
		return d;
	}
};

int main()
{
	vector <float>v1(3);
	v1.arr[0] = 4.67;
	v1.arr[1] = 3.66;
	v1.arr[2] = 1.88;

	vector <float>v2(3);
	v2.arr[0] = 1.88;
	v2.arr[1] = 0.78;
	v2.arr[2] = 1.67;
	float a = v1.dotProduct(v2);
	cout<<a<<endl;
	return 0;
}

