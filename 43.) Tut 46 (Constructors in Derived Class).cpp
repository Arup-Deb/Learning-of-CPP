


/*   

     Constructors in Derived Class in C++
We can use constructors in derived classes in C++
If the base class constructor does not have any arguments, there is no need for any constructor in the derived class
But if there are one or more arguments in the base class constructor, derived class need to pass argument to the base class constructor
If both base and derived classes have constructors, base class constructor is executed first

Special Syntax

C++ supports a special syntax for passing arguments to multiple base classes
The constructor of the derived class receives all the arguments at once and then will pass the call to the respective base classes
The body is called after the constructors is finished executing
/////////////////////////////////////////////////////////////



Derived-Constructor (arg1, arg2, arg3….): Base 1-Constructor (arg1,arg2), Base 2-Constructor(arg3,arg4)
{
….
} Base 1-Constructor (arg1,arg2)


//////////////////////////////////////////////////////////////



Special Case of Virtual Base Class

The constructors for virtual base classes are invoked before a non-virtual base class
If there are multiple virtual base classes, they are invoked in the order declared
Any non-virtual base class are then constructed before the derived class constructor is executed
/*
