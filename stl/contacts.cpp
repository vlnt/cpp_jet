#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map <string, string> contacts;

    contacts["Valentyn Mirosh"] = "(093)4803771";
    contacts["Bogdana Scherbyna"] = "(073)2091595";
    contacts["Taras Mirosh"] = "(093)2154254";

    for (pair<string, string> element : contacts)
    {
        cout << element.first << " = " << element.second << endl;
    }

    return 0;
}