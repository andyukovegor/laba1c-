#include"Car.h"

Car::Car():Car("Model", "color", 0){}

Car::Car(const char* model,const  char*color, int speed)
{
    this ->model = NULL;
    setModel(model);
    this ->color = NULL;
    setColor(color);
    if(!setSpeed(speed))
    {
        this-> speed = 0;
    }
};
void Car :: print()
{
    std::cout << "model = " << model <<  ",";
    std::cout << "color = " << color <<  ",";
    std::cout << "speed = " << speed <<  "\n";
}

Car::~Car()
{
    delete [] model;
    delete [] color;
}

void Car::setModel(const char* model)
{
    delete [] this ->model;
    int len = strlen(model);
    this ->model = new char[len];
    strcpy (this ->model, model);
}

void Car::setColor(const char* color)
{
    delete [] this ->color;
    int len = strlen(color);
    this ->color = new char[len];
    strcpy (this ->color, color);
}

bool Car::setSpeed(int speed)
{
    if(speed >=0 && speed<200)
        {
            this->speed = speed;
            return true;
        }
    return false;
}

int Car::getSpeed()
{
    return speed;
}

char* Car::getModel(char* model)
{
    strcpy(model, this->model);
    return model;
}

char* Car::getColor(char* color)
{
    strcpy(color, this->color);
    return color;
}


bool Car::operator> (const Car & c) const
{
    return(speed > c.speed);
}

bool Car::operator< (const Car & c) const
{
    return(speed < c.speed);
}

bool Car::operator>= (const Car & c) const
{
    return !(*this < c);
}

bool Car::operator<= (const Car & c) const
{
    return !(*this > c);
}

bool Car::operator== (const Car & c) const
{
    return(speed == c.speed);
}

bool Car::operator!= (const Car & c) const
{
    return !(*this == c);
}

Car&Car::operator=(Car &c)
{
    this ->model = NULL;
    setModel(c.model);
    this ->color = NULL;
    setColor(c.color);
    this-> speed = c.speed;
    return *this;
}
void Car::operator++()
{
    this->speed ++;
}
void Car::operator--()
{
    this->speed --;
}
ostream& operator<< (ostream &out, const Car &c)
{
    out << " speed: " << c.speed << " model: " << c.model << " color: " << c.color;
    return out;
}
istream& operator>> (istream &in, Car &c)
{
    in >> c.model;
    in >> c.color;
    in >> c.speed;
    return  in;
}

