#include <iostream> 
using namespace std;

int main ()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 0 && age <= 12)
    {
        cout << "You are a child." << endl;
    }
    else if (age >= 13 && age <= 19)                                                                                                                                                                                   
    {
        cout << "You are a teenager." << endl;
    }
    else if (age >= 20)
    {
        cout << "You are grown up." << endl;
    }
    else
    {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}














}