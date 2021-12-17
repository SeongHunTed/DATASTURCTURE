#include <iostream>
using namespace std;

struct Order
{
    char name[20];
    char type[20];
    int size;
};

void send(Order *order)
{
    if(order != nullptr && order->size != 0)
    {
        cout << "Thanks for Order" << endl;
        cout << "You : " << order->name << " shoes : " << order->type << " size : " << order->size << "are ordered!";
    }
}

int main()
{   
    int i = 1;
    while(i == 1)
    {
        Order *p = new Order[1];

        cout << "Hi, it's footlocker" << endl;
        cout << endl;
        cout << "We have these shoes" << endl;
        cout << "======================" << endl;
        cout << "Jordan 11, size 240" << endl;
        cout << "Jordan 11, size 245" << endl;
        cout << "Jordan 11, size 250" << endl;
        cout << "Dunk 11, size 250" << endl;
        cout << "Dunk 11, size 250" << endl;
        cout << "Dunk 11, size 250" << endl;
        cout << "======================" << endl;
        cout << "Input your name" << endl;

        cin >> p->name;
        cout << "What shoes" << endl;
        cin >> p->type;
        cout << "What size" << endl;
        cin >> p->size;
        cout << endl;
        
        send(p);

        cout << "one more? you want :1 or not : 0";
        cin >> i;
        delete[] p;
    }

    return 0;
}