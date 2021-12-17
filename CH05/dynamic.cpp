#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "총 몇개의 정수를 입력하시겠습니까? ";
    cin >> size;

    int *arr = new int[size];

    cout << "먼저 입력한 총 개수만큼 정수를 입력한 후 엔터키를 눌러주세요. " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    float avr = (float)sum / (float)size;

    cout << "정수의 총 합은 " << sum << "이며, 평균은 " << avr << "입니다" << endl;

    delete[] arr;

    return 0; 
}