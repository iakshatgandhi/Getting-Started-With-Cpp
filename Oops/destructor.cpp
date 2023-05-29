/*
A destructor is also a special member function as a constructor. Destructor destroys the class objects created by the constructor. Destructor has the same name as their class name preceded by a tilde (~) symbol. It is not possible to define more than one destructor. The destructor is only one way to destroy the object created by the constructor. Hence destructor can-not be overloaded. Destructor neither requires any argument nor returns any value. It is automatically called when the object goes out of scope.  Destructors release memory space occupied by the objects created by the constructor. In destructor, objects are destroyed in the reverse of object creation.

The syntax for defining the destructor within the class

          ~ <class-name>()
          {
            }
*/


#include <iostream>
using namespace std;
int count = 0;
class Test {
public:
	Test()
	{
		count++;
		cout << "\n No. of Object created:\t" << count;
	}

	~Test()
	{
		cout << "\n No. of Object destroyed:\t" << count;
		--count;
	}
};

main()
{
	Test t, t1, t2, t3;
	return 0;
}

/*
Characteristics of a destructor:-
1. Destructor is invoked automatically by the compiler when its corresponding constructor goes out of scope and releases the memory space that is no longer required by the program.
2. Destructor neither requires any argument nor returns any value therefore it cannot be overloaded.
3. Destructor  cannot be declared as static and const;
4. Destructor should be declared in the public section of the program.
5. Destructor is called in the reverse order of its constructor invocation.
*/


