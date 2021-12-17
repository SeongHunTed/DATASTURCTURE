#include <iostream>
using namespace std;

int main(){
    long lArray[20] = {0};

    long(*p)[20] = &lArray;

    (*p)[3] = 300;

    for(int i = 0; i <20; i++){
        cout << "lArray[" << i << "] = " << (*p)[i] << endl;
    }

    // 질문사항 for(long& i : lArray) 썼을때 lArray[3] = 7309461377479894372

    return 0;
}