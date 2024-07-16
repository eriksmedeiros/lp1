#include <iostream>
#include <string.h>
using namespace std;

class Vehicle{

public:
    void move(){
        cout << "Vehicle is moving" << endl;
    }
};

class Car : public Vehicle{
public:
    void honk(){
        cout << "Car is honking" << endl;   
    }
};

class Bike : public Vehicle{
public:
    void honk(){
        cout << "Bike is honking" << endl;   
    }
};

int main(){
    Bike mybike;
    Car mycar;

    mycar.move();
    mybike.honk();

    mycar.honk();
    mybike.move();
    
}