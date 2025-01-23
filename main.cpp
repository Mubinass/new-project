#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // //problem1
    // cout << "Hello" << endl;
    // string name;
    // cout << "Please enter your name: ";
    // cin >> name;
    // cout << "Your name is: " << name << endl;
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // cout<<"Your age is: "<<age<<endl;

// //problem2
// for (int i=1; i<=5; i++) {
//     cout << setw(5) << i << endl;
// }
    // //problem3
    // int x,y;
    // cout<<"Please enter your integer:";
    // cin>>x>>y;
    //
    // int temp=x;
    // x=y;
    // y=temp;
    //
    // cout << "Swapped values:" << "x = " << x << ", y = " << y << endl;
    // //problem4
    // int n;
    //
    // cout << "Enter a number: ";
    // cin >> n;
    //
    // cout << setw(5) << "Square" << endl;
    //
    // for (int i = 1; i <= n; ++i) {
    //     cout << setw(5) << i << setw(5) << i * i << endl;
    // }
    //problem5
    string  str;

    cout << "Enter a string:";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, str);

    cout << setw(50) << setiosflags(ios::left) << str << endl;

    return 0;
}

