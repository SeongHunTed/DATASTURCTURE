#include <iostream>
using namespace std;

int main(){

    struct Friends
    {
        char name[20];
        char gender;
        unsigned int num_of_met[3];
        unsigned int num_of_call[3];
    };

    Friends myfriends[3] = {
        {"Jay", 'm', {20,15,5}, {10,5,1}},
        {"James", 'm', {22,17,10}, {20,20,10}},
        {"Judy", 'f', {10,12,8}, {30,30,30}}
    };

    for(int i = 0; i<3; i++){
        cout << "내 친구 이름은 " << myfriends[i].name << "이고" << endl;
        cout << "성별은 " << myfriends[i].gender << "입니다." << endl;

        cout << "최근 3달 동안 ";
        for (int j = 0; j < 3; j++)
        {
            cout << myfriends[i].num_of_met[j] << "번 ";
        }
        cout << "만났고" << endl;
        cout << "최근 3달 동안 ";        
        for(int j = 0; j<3; j++){
            cout << myfriends[i].num_of_met[j] << "번 ";
        }
        cout << "전화했습니다." << endl
            << endl;
    }
    return 0;
}