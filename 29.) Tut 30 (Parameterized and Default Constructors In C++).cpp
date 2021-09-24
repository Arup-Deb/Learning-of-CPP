/*
#include<iostream>
using namespace std;


class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}
int main(){
    // Implicit call
    Complex a(4, 6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}
*/
/*
#include<iostream>
using namespace std;

class Point
{
    int x, y;
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }

        void displayPoint()
        {
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
*/


//***********find the distance between two points. using class *****************


#include <iostream>
#include <cmath>
using namespace std;

// These can be used instead of "using namespace"

class DistanceBetweenTwoPoints
{
public:
    // Constructor
    DistanceBetweenTwoPoints()
    {}



    // Get input values
    void inputValues()
    {

        std::cout << "Enter the points for the coordinates\n" << "Point x for first coordinates: ";     
        std::cin >> x_;
        std::cout << "\n\nPoint y for first coordinate: ";
        std::cin >> y_;
        std::cout << "\n\nPoint x for the second coordinate: ";
        std::cin >> a_;
        std::cout << "\n\nPoint y for the second coordinate: ";
        std::cin >> b_;

    }   

    // Display the answer calculated
    void displayAnswer()
    {
        std::cout << "\n\nThe answer is " << getDistance();
    }

private:
    // Data members
    double x_, y_, a_, b_;

    // Calculate the distance given the input values    
    // This is "private" because it is not called explicitly
    double getDistance()
    {
        return sqrt(pow(x_ - a_, 2) + pow(y_ - b_, 2));
    }
};
int main()
{

    // Create an instance of the DistanceBetweenTwoPoints
    DistanceBetweenTwoPoints distance;

    // Gets input
    distance.inputValues();

    // Displays the answer
    distance.displayAnswer();

    /*
     * Note that I didn't have to call the getDistance() function as
     * it's used internally by displayAnswer();
     * */
    return 0;
}

