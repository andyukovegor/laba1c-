#include "Car.h"
using namespace std;

int main()
{
    Car c("Model", "Color", 80);
    Car c1;


    c.print();
    c1.print();

    c1.setModel("LADA");
    c1.setColor("RED");
    c1.setSpeed(12);
    c1.print();
    if((c > c1)== true)
    cout << "c < c1";
    c=c1;

    cout << "\n";
    cout << "\n";

    c.print();
    c1.print();
    return 0;
}



