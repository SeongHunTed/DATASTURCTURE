#include <iostream>
using namespace std;

void countdown(int n)
{
    if( n < 1){
        cout << "Launch~" << endl;
        return;
    }
    cout << n << endl;
    countdown(n-1);
}

int main()
{
    cout << "카운드다운을 시작합니다..." << endl;

    countdown(10);

    return 0;
}