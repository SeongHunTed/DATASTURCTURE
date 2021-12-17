#include <iostream>
using namespace std;

int main(){
    int a = 123;
    int *p = &a;

    cout << "*p = " << *p << endl;

    *p = 789;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}