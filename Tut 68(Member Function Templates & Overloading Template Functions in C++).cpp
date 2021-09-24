#include <iostream>
using namespace std;

template <class T>
 class Arup{
public:
	T data;
	Arup(T a){
		data = a;
	}
	void display();
};

template <class T>
void Arup<T>::display(){
	cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{

//Arup<float> h(235.04555);
//Arup<char> h('y');
//cout<<h.data<<endl;
//h.display();
//func(4); //Exact match takes the highest prority
   func1;
	return 0;
}
