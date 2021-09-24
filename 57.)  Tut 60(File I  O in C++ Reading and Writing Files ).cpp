#include <iostream>
#include <fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/
// In order work with file in C++,you will have to open it.primarily, there are 2 ways to open a file:
// 1. Using the constrctor
// 2. Using the member function open() of the class
using namespace std;

int main()
{
string st = "Arup Deb";
string st2;
//opening files using constructor and writing it
//ofstream out("sample60.txt"); //write operation
//out<<st;

//opening files using constructor and reading it
ifstream in("sample60b.txt"); //read operation
//in<<st;

getline(in, st2);
cout<<st2;
	return 0;
}
