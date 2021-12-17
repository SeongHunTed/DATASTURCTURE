#include <iostream>

using namespace std;

int main(){
    unsigned int scores[10] = {10, 100, 94, 36, 72, 88, 60, 60, 80, 24};
    int sum = 0;
    float avg = 0;

    for (int i = 0; i<10; ++i){
        sum += scores[i];
    }

    avg = sum/10.0f;

    cout << "퀴즈왕 평균 : " << avg << endl;

}