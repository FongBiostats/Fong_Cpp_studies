#include <iostream>
using namespace std;

void myfunction(){
    cout << "say hello to my little friend"<<endl;
}

void myfunction2(){
    cout << "what do you thinking?"<<endl;
}

void myfunction3(string cars){
    cout << cars << "price\n";
}


int main(){
    myfunction();
    myfunction2();
    myfunction3 ("taxi");
    myfunction3 ("bus");
    
    return 0;
}