#include <iostream>
using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int ret = max(10, 20);

    cout << "10과 20 중 큰 값은 " << ret << "입니다." << endl;

    return 0;
}