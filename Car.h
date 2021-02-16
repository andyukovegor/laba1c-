#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include <iostream>
#include<cstring>
using namespace std;

class Car
{
    char* model;
    char* color;
    int speed;

public:
    Car();
    Car(const char* model,const char*color, int speed);
    Car(const Car &b);
    ~Car();

    void print();
    void setModel(const char* model);
    void setColor(const char* color);
    bool setSpeed(int speed);

    int getSpeed();
    char* getModel(char* model);
    char* getColor(char* color);

    bool operator> (const Car & c) const;
    bool operator< (const Car & c) const;
    bool operator>= (const Car & c) const;
    bool operator<= (const Car & c) const;
    bool operator== (const Car & c) const;
    bool operator!= (const Car & c) const;

    Car &operator=(Car &c);

    void operator++();
    void operator--();

    friend ostream& operator<< (ostream &out, const Car &c);
    friend istream& operator>> (istream &in, Car &c);
};
#endif // CAR_H_INCLUDED
