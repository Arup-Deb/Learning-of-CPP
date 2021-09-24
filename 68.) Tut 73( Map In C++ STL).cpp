#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
map<string, int> marksMap;
marksMap["Arup"] = 96;
marksMap["Chinmoy"] = 97;
marksMap["Deepjoy"] = 99;

// marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );

map<string,int> :: iterator iter;
for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
{
	cout<<(*iter).first<<" "<<(*iter).second<<"\n";
}
cout<<"The size is: "<<marksMap.size()<<endl;
cout<<"The max size is: "<<marksMap.max_size()<<endl;
cout<<"The empty return size is: "<<marksMap.empty()<<endl;
	return 0;
}
