#include <iostream>
using namespace std;

int main(){

    int iArray[10];
    int *pi = &iArray[3];

    cout << "pi = " << pi << endl;
    cout << "pi + 1 = " << pi + 1 << endl;
    cout << "pi + 2 = " << pi + 2 << endl;
    cout << "pi + 3 = " << pi + 3 << endl;

    short sArray[10];
    short *ps = &sArray[3];

    cout << "ps = " << ps << endl;
    cout << "ps + 1 = " << ps + 1 << endl;
    cout << "ps + 2 = " << ps + 2 << endl;
    cout << "ps + 3 = " << ps + 3 << endl;

    return 0;
}