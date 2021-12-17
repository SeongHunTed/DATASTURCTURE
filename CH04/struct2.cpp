#include <iostream>
using namespace std;

struct Dizzy
{
    int id;
    Dizzy *p;
};

int main(){

    Dizzy a,b,c;

    a.id = 1;
    a.p = &b;

    b.id = 2;
    b.p = &c;

    c.id = 3;
    c.p = &a;

    cout << "a.id = " << a.id << endl;
    cout << "b.id = " << a.p->id << endl;
    cout << "(*a.p).id = " << (*a.p).id << endl;
    cout << "c.id = " << a.p->p->id << endl;
    cout << "a.id = " << a.p->p->p->id << endl;

    return 0;
}