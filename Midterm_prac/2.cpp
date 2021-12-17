#include <iostream>
using namespace std;

int main()
{
    unsigned int scored[10] = {10, 100, 94, 36, 72, 88, 60, 60, 80, 24};

    int sum = 0;
    int avg = 0;

    for(int i = 0; i<10; i++)
    {
        sum += scored[i];
    }

    avg = sum/10;

    cout << "average : " << avg << endl;

    cout << "upper than average score : ";
    for(int i = 0; i<10; i++)
    {
        if(avg < scored[i]){
            cout <<  scored[i] << " ";
        }
    }
    cout << endl;

    return 0;
}