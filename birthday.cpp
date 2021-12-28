#include <iostream>
using namespace std;

void myMessage()
{
    // Enter any customized message in here.
}

int main()
{

    cout << endl;
    cout << "     *        *        *\n    ***      ***      ***" << endl;
    for (int x = 0; x < 3; x++)
    {
        cout << "    |-|      |-|      |-|" << endl;
    }
    cout << "____|-|______|-|______|-|___" << endl;
    cout << "|==========================|" << endl;
    for (int x = 0; x < 1; x++)
    {
        cout << "|      HAPPY BIRTHDAY      |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    }

    for (int x = 0; x < 1; x++)
    {
        cout << "|      <Insert Name>       |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
    }

    cout << "|__________________________|\n \n ";

    myMessage();
}
