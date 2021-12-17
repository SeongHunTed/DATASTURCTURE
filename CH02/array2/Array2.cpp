#include <iostream>

using namespace std;

int main()
{
    int kor_scores[5];

    kor_scores[0] = 100;
    kor_scores[1] = 88;
    kor_scores[2] = 92;
    kor_scores[3] = 40;
    kor_scores[4] = 76;

    for (int i = 0; i<5; ++i){
        cout << i << " 번째 원소 = " << kor_scores[i] << "\n";
    }

    return 0;
}