#include <iostream>
#include <locale.h>
#include <cwchar>
using namespace std;
int arr[3][3];
void vvod()
{
    for (int i = 0; i < 3; i++)
    {
        for (int z = 0; z < 3; z++)
        {
            cout << "wedite element pod indeksami: " << i << " " << z << endl;
            cin >> arr[i][z];
        }
    }
}
void stroka()
{
    
    bool found = false;

    for (int i = 0; i < 3; i++) {
        bool isPositive = true;

        
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] <= 0) {
                isPositive = false;
                break;  
            }
        }

        if (isPositive) {
            cout << "stroka " << (i + 1) << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "invalid" << endl;
    }
}
int main()
{
    vvod();
    stroka();
}
