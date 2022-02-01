#include <iostream>

using namespace std;

void valueChanged1(int a);
void valueChanged2(int& a);

int main()
{
    int myNumber = 20;
    cout << "Before(passing by value): " << myNumber << endl;
    valueChanged1(myNumber);
    cout << "After(passing by value): " << myNumber << endl;

    cout << endl << endl;

    cout << "myNumber is currently (passing by referance): " << myNumber << endl;
    valueChanged2(myNumber);
    cout << "After function 2 invocation(passing by referance): " << myNumber << endl;
    return 0;
}

void valueChanged1(int a)
{
    a = 100;
}

void valueChanged2(int& num)
{
    num = 100;
    cout << "Inside valueChanged2 function num is: " << num << endl;
}