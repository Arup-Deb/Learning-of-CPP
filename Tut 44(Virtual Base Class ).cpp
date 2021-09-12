#include <iostream>
using namespace std;
/*
Inheritance:
student -->test
student -->sports
test --> result
sports --> result

*/
class Student{
protected:
int roll_no;
public:
	void set_number(int a){
		roll_no = a;

	}
	void print_number(void)
{
	cout<<"Your roll no is"<<roll_no<<endl;
}
};
class Test : virtual public Student {
protected:
	float maths,physics;
public:
	void set_marks(float m1, float m2){
		maths = m1;
		physics = m2;
	}
void print_marks(void)
{
	cout<<"You result is here: "<<endl
	<<"maths: "<<maths<<endl
	<<"physics: "<<physics<<endl;
}

};
class Sports: virtual public Student{
protected:
	float score;
public:
	void set_score(float sc){
		score = sc;
	}
	void print_score(void)
	{
    cout<<"Your PT score is "<<score<<endl;

	}
};

class Result : public Test, public Sports{
private:
	float total;
public:
	void display(void){

		total = maths+ score +  physics;
		print_number();
		print_marks();
		print_score();
		cout<<"Your total score is: "<<total<<endl;
	}
};
int main()
{
	Result arup;
	arup.set_number(240);
	arup.set_marks(78.9, 55.7);
	arup.set_score(9);
	arup.display();
	return 0;
}
