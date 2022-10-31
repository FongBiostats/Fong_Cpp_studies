#include <iostream>
using namespace std;

class Car {
    public:
    string food;
    string country;
    string colour;
    int price;

};

int main ()
{
    Car carobj1;
    carobj1.food = "apple";
    carobj1.country = "France";
    carobj1.colour= "red";
    carobj1.price = 10;

    Car carobj2;
    carobj2.food= "Pizza";
    carobj2.country = "Italy";
    carobj2.colour= "green";
    carobj2.price= 80;

    cout << carobj1.food << " " << carobj1.country << " " << carobj1.colour <<" "<< carobj1.price << "\n";
    cout << carobj2.food << " " << carobj2.country << " " << carobj2.colour << " " << carobj2.price << "\n";
    return 0;

}