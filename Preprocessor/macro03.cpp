#include <iostream>
using namespace std;
 
// Macro definition
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138
 
// Driver Code
int main()
{
    // Print the message
    cout << "Geeks for Geeks have "
         << INSTAGRAM << "K followers on Instagram!";
 
    return 0;
}


//INSTAGRAM is expanded first to produce FOLLOWERS. Then the expanded macro is expanded to produce the outcome as 138K. This is called the chaining of macros. 