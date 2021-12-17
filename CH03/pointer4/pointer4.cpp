#include <iostream>
using namespace std;

int main(){
    long lArray[20];

    long(*p)[20] = &lArray;

    (*p)[3] = 300;

    cout << "lArray[3] = " << lArray[3] << endl;

    return 0;
}