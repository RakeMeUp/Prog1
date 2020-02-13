#include <iostream>
using namespace std;

int main(){
    int a = 666;
    int b = 999;

    cout << a << " " << b << endl;

    a = b - a; // 999 - 666     => a = 333;  
    b = b - a; // 999 - 333     => b = 666;
    a = b + a; // 666 + 333     => a = 999;

    cout << a << " " << b << endl;

    a = b - a; // 666 - 999     => a = -333;
    b = b - a; // 666 - -333    => b = 999;
    a = b + a; // 999 + -333    => a = 666;

    cout << a << " " << b << endl;
}