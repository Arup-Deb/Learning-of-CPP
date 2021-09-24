#include <iostream>
using namespace std;

class CWH{
protected:
	string title;
	float rating;
public:
	CWH(string s,float r){
		title = s;
		rating = r;
	}
	virtual void display(){}
	
};

class CWHVideo: public CWH
{
	float videoLength;
public:
	CWHVideo(string s, float r, float vl): CWH(s, r){
		videoLength = vl;
	}
	void display(){
		cout<<"  This is an amazing vedio with title "<<title<<endl;
		cout<<"  Ratings: "<<rating<<" out of 5 stars"<<endl;
		cout<<"  Length of this video is : "<<videoLength<<" minutes"<<endl<<endl;


	}
};
class CWHText: public CWH
{
	int words;
public:
	CWHText(string s, float r, float wc): CWH(s, r){
		words = wc;
	}
	void display(){
		cout<<"  This is an amazing text tutorial with title "<<title<<endl;
		cout<<"  Ratings of this texttutorial : "<<rating<<" out of 5 stars"<<endl;
		cout<<"  Length of this texttutorial is : "<<words<<" words "<<endl<<endl;


	}
};
int main()
{
	string title;
	float rating, vlen;
	int words;

	// for code with harry video
	title  = "C++ Tutorial";
	vlen = 4.56;
	rating = 4.89;
	CWHVideo Cppvideo(title, rating, vlen);
	//Cppvideo.display(); 


	// for code with harry Text
	title  = "C++ Tutorial";
	vlen = 4.226;
	rating = 4.8009;
	CWHText Cpptext(title, rating, vlen);
	//Cpptext.display();

CWH* tuts[2];
tuts[0] = &Cppvideo;
tuts[1] = &Cpptext;

tuts[0]-> display();
tuts[1]-> display();
	return 0;
}



/*
Rules for virtual functions
 1. They cannot be static
 2. They are accessed by object pointers
 3. Virtual functions can be a friend of another class
 4. A virtual function in the base class might not be used.
 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/
