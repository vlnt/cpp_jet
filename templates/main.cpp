#include <iostream>
#include <string>
#include "Swapper.h"

using namespace std;

template < class T >
T getBigger(T a, T b);

int main()
{
    Swapper<int> intSwapper(5, 10);
    Swapper<string> stringSwapper("John", "Alice");
    
    string name1 = "John";
    string name2 = "Alice";

    int biggerInt = getBigger(6, 9);
    double biggerDouble = getBigger(6.88, 4.76);
    string biggerString = getBigger(name1, name2);

    cout << "Bigger items:" << endl;
    cout << "\t" << biggerInt << endl;
    cout << "\t" << biggerDouble << endl;
    cout << "\t" << biggerString << endl;
    cout << endl << endl;

    cout << "Testing swapper:" << endl;
    cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
    cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
    cout << endl << endl;

    intSwapper.swap();
    stringSwapper.swap();

    cout << "After the swap...:" << endl;
    cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
    cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
    cout << endl << endl;



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