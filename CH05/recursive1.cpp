#include <iostream>
using namespace std;

void Convert2Binary(int decimal)
{
    if (decimal <= 0)
        return;
    Convert2Binary(decimal / 2);

    cout << decimal % 2;
}

int main()
{
    Convert2Binary(3);

    cout << endl;

    return 0;
}