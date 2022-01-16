#include <iostream>
#include <string>

using namespace std;

template < class T >
T getBigger(T a, T b);

int main()
{
    string name1 = "John";
    string name2 = "Alice";

    int biggerInt = getBigger(6, 9);
    double biggerDouble = getBigger(6.88, 4.76);
    string biggerString = getBigger(name1, name2);

    cout << "Bigger items:" << endl;
    cout << "\t" << biggerInt << endl;
    cout << "\t" << biggerDouble << endl;
    cout << "\t" << biggerString << endl;

    return 0;
}

template < class T >
T getBigger(T a, T b)
{
    if(a > b)
      {
          return a;
      }
    return b;
}