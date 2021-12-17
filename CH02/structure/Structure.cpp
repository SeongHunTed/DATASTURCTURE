#include <iostream>

using namespace std;

struct StudentInfo
{
    char bloodType;
    int stdNumber;
    float grade;
};

int main(){
    StudentInfo st1 = {'O', 20031128, 3.5f};
    StudentInfo st2 = {'A', 19961219, 2.3f};

    cout << "학번 : " << st1.stdNumber << endl;
    cout << "학점 : " << st1.grade << endl;
    cout << "혈액형 : " << st1.bloodType << endl;

    cout << "학번 : " << st2.stdNumber << endl;
    cout << "학점 : " << st2.grade << endl;
    cout << "혈액형 : " << st2.bloodType << endl;

    return 0;
}