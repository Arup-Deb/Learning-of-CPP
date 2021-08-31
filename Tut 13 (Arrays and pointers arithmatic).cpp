#include <iostream>
using namespace std;

int main()
{
	//Arrays example
	int marks[4]={23,24 ,25,67};
	int mathmarks[4]={273,294 ,2995,6007};


	cout<< "these are the math marks" << endl;
	cout<<mathmarks[0]<< endl;
	cout<<mathmarks[1]<< endl;
	cout<<mathmarks[2]<< endl;
	cout<<mathmarks[3]<< endl;

	//cout<< "these are the normal marks" << endl;
	//cout<< marks[0]<< endl;
	//cout<< marks[1]<< endl;
	//you can change the value of an array............
	marks[2]=233;
	//cout<< marks[2]<< endl;
	//cout<< marks[3]<< endl;
	//*/
	for (int i = 0; i < 4; i++)
	{
		cout<<" The value of marks "<<i<<" is "<<marks[i]<<endl;
	}

	//quiz -- do the same using do while and while loop.


	// pointers and arrays

	int* p= marks;
     cout<<*(p++)<<endl;
     cout<<*(p++)<<endl;  
	/*cout<< "the values of *p is " <<*p << endl;
	cout<< "the values of *(p+1) is " <<*(p+1) << endl;
	cout<< "the values of *(p+2) is " <<*(p+2)<< endl;
	cout<< "the values of *(p+3) is " <<*(p+3)<< endl;
		*/
		return 0;
}
