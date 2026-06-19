Abstraction means hiding all unnecessary detiasl and showing only the important parts

Abstract classes and pure virtual functions
.) Abstract classes are used to provide a base class from which other classes can be derived
.)They cannot be instantiated and are meant to be inherited
.) Abstract classes are typically used to define an interface for derived classes

Pure virtual function
A pure virtual function or abstraction function is a virtual function with no defination or logic
It is declared by assigning 0 at the time of declaration
virtual void func() = 0;


Static Keyword
> static variables
    variables declared as static in a function are created & initialised once for the lifetime of the program // in function

    Static variables in class are created and initialised once. They are shared by all the objects of the class . // in class

> static objects
    