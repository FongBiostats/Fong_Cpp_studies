#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    string nation;
    string gender;
    int age;
    int height;
    int weight;

    Car(string x, string y, string z, int a, int b, int c);

};

Car::Car( string x, string y, string z, int a, int b,int c){
     name= x;
     nation= y;
     gender= z;
     age= a; 
     height= b;
     weight= c;
}

int main(){

     Car carobj1 ("Tom","Russia","male",20,178,60);
     Car carobj2 ( "Ken","Germamy","male",32,185,75);
     Car carobj3 ("Alice","France","Female",16,155,45);
     Car carobj4 ("Sam","Japan","male",27,160,52);

     cout << carobj1.name << " " << carobj1.nation << " " << carobj1.gender << " " << carobj1.age << " " << carobj1.height << " " << carobj1.weight << "\n";
     cout << carobj2.name << " " << carobj2.nation << " " << carobj2.gender << " " << carobj2.age << " " << carobj2.height << " " << carobj2.weight << "\n";
     cout << carobj3.name << " " << carobj3.nation << " " << carobj3.gender << " " << carobj3.age << " " << carobj3.height << " " << carobj4.weight << "\n";
     cout << carobj4.name << " " << carobj4.nation << " " << carobj4.gender << " " << carobj4.age << " " << carobj4.height << " " << carobj4.weight << "\n";

    return 0;
}