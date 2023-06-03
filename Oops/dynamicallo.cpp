#include <iostream>
using namespace std;
 
class geeks {
    int* p;
 
public:
    geeks()
    {
        p = new int[3]{ 1, 2, 3 };
 
        for (int i = 0; i < 3; i++) {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    ~geeks() // Destructor definition
    {
        delete[] p; // Free the dynamically allocated memory
    }
};
 
int main()
{
 
    // five objects will be created
    // for each object
    // default constructor would be called
    // and memory will be allocated
    // to array dynamically
    geeks* ptr = new geeks[5];
    delete[] ptr;
    return 0;
}