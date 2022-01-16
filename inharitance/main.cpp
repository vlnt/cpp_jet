#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animal myAnimal("Sam", 100);
     
    cout << "Animal name: " << myAnimal.getName() << endl;
    cout << "Animal weight: " << myAnimal.getWeight() << endl;
    cout << "Animal noise: " << myAnimal.makeNoise() << endl;

    return 0;

}