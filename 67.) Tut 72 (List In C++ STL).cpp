#include <iostream>
#include <list>
using namespace std;


void display(list<int> &lst){
	list<int> :: iterator it;
	for ( it=lst.begin(); it!=lst.end(); it++)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}
int main()
{
	// 6 8 7
list<int> list1;//List of 0 length


list1.push_back(5);
list1.push_back(7);
list1.push_back(1);
list1.push_back(9);
list1.push_back(12);
display(list1);
//list1.pop_front();
//list1.pop_back();
//list1.remove(9); //removing element from middle of the list

//list1.sort(); // sorting == smaller to bigger 
//display(list1); 

//Reversing the list
list1.reverse();
display(list1);


list<int> list2(3);// Empty list of size 3
list<int> :: iterator iter;
iter = list2.begin();
*iter = 45;
iter++;
*iter = 6;
iter++;
*iter = 69;


display(list2);

list1.merge(list2); // merging of two list...
cout<<"List1 after merging "<<endl;
display(list1);

	return 0;
}
