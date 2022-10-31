#include <iostream>
using namespace std;

int main()
{
    int country=10;
    switch(country)
    {
        case 1:
        cout << "USA" <<endl;
        break;

        case 2:
        cout << "RUSSIA" <<endl;
        break;

        case 3:
        cout << "France" <<endl;
        break;

        case 4:
        cout << "JAPAN" <<endl;
        break;

        case 5:
        cout << "GERMANY" <<endl;
        break;

        default:
        cout << "CHINA" << endl;
    }

    int food=2;
    switch (food)
    {
        case 1:
        cout << "cake" <<endl;
        break;

        case 2:
        cout << "egg" <<endl;
        break;

        case 3:
        cout << "milk" <<endl;
        break;

        case 4:
        cout << "sugar" <<endl;
        break;

        case 5:
        cout << "pork" <<endl;
        break;

        case 6:
        cout << "rice" <<endl;
        break;

        default:
        cout << "apple" <<endl;
    }
    return 0;
}
