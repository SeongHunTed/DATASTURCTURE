#include <iostream>
using namespace std;

int main(){

    struct Point
    {
        int x,y;
    };

    Point pt[3] = {{10, 20}, {30, 40}, {50, 60}};
    Point *p[5] = {&pt[0], &pt[1], &pt[2], &pt[0], &pt[1]};
    Point(*P)[3] = &pt; // &pt[0]에 pt[0]주소 전달

    for (int i = 0; i < 3; i++)
    {
        cout << "pt의 " << i << "번째 x = " << pt[i].x << ", ";
        cout << "pt의 " << i << "번째 y = " << pt[i].y << endl;

        cout << "*p의 " << i << "번째 x = " << p[i]->x << ", ";
        cout << "*p의 " << i << "번째 y = " << p[i]->y << endl;

        cout << "(*P)의 " << i << "번째 x = " << (*P)[i].x << ", ";
        cout << "(*P)의 " << i << "번째 y = " << (*P)[i].y << endl;
        cout << endl;
    }
}