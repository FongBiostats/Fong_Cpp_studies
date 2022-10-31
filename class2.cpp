#include <iostream>
using namespace std;

class Car{
    public:
    string goods;
    string tyle;
    int price;
    int date;
    Car(string x, string y, int z, int w);

};

Car::Car(string x, string y, int z, int w){
    goods= x;
    tyle= y;
    price= z;
    date= w;
}

int main(){
    Car carobj1("fans","electrics",200,1996);
    Car carobj2("television","electrics",1000,2001);

    cout << carobj1.goods << " " << carobj1.tyle << " " << carobj1.price << " " << carobj1.date << "\n";
    cout << carobj2.goods << " " << carobj2.tyle << " " << carobj2.price << " " << carobj2.date << "\n";

    return 0;
}