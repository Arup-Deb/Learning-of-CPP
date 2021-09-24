#include <iostream>
using namespace std;

int sum(int a, int b){
	cout<<"Using function with 2 arguments "<<endl;
	return a+b;
}

int sum(int a, int b, int c){
	cout<<"Using function with 3 arguments "<<endl;
	return a+b+c;
}
//calculate the volume of a cylinder.
int volume(double r, int h){
	return(3.14 * r * r * h);
}
//calculate the volume of a cube.
int volume(int a){
	return(a * a * a);
}
	//calculate the volume of a rectangular box.
int volume(int l, int b, int h){
	return(l * b * h);
}
int main() 
{
	cout<<"THE SUM of 3 and 6 is " <<sum(3, 6)<<endl;
	cout<<"THE SUM of 3 , 7 and 6 is "<<sum(3, 7, 6)<<endl;
	cout<<"THE SUM of cuboid 3 , 7 and 6 is "<<volume(3, 7, 6)<<endl;
	cout<<"THE volume of cylinder radius 3 , height  6 is "<<volume(3, 6)<<endl;
	cout<<"THE volume of cube of side 3 "<<volume(3)<<endl;
	
	return 0;
}
