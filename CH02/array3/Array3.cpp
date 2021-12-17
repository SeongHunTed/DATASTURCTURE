#include <iostream>

using namespace std;

int main(){
    int kor_scores[5] = {100, 88, 92, 40, 76};

    for (int i = 0; i < 5; ++i){
        cout << i << " 번째 원소 = " << kor_scores[i] << "\n";
    }
    return 0;
}