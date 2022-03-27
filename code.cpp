#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    for (int i = 10; i >= 0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }
    cout << "Happy New Year!!!" << endl;
    return 0;
}
