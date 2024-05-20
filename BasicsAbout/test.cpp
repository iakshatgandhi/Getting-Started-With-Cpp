/*

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res ^= i;
    }
    cout << res << endl;
    return 0;
}

*/


// find the position of the right most set bit taking two numbers as input


//#include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     cin >> a >> b;
//     int res = a ^ b;
//     int pos = 0;
//     while (res > 0) {
//         if (res & 1) {
//             break;
//         }
//         pos++;
//         res >>= 1;
//     }
//     cout << pos + 1 << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){

    int n1, n2;
    cin>>n1>>n2;
    
    int position = 1;
    while(n1!=0 &&  n2!=0){
        int bit1 = n1&1;
        int bit2 = n2&1;
        if(bit1!=bit2){
            cout<<position<<endl;
            break;
        }
        position++;
        n1 = n1>>1;
        n2 = n2>>1;
    }
}