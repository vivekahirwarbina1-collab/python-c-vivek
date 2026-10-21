#include <iostream>
using namespace std;

int main()
{
    int num;
    char ch;

    while (true)
    {
        cout << "\nEnter a number: ";
        cin >> num;

        if (num % 2 == 0)
        {
            cout << num << " is Even";
        }
        else
        {
            cout << num << " is Odd";
        }

        cout << "\nStop karne ke liye S dabao, continue ke liye koi bhi key: ";
        cin >> ch;

        if (ch == 's' || ch == 'S')
        {
            break;
        }
    }

    cout << "\nProgram Stopped!" << endl;

    return 0;
}