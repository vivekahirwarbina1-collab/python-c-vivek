#include <iostream>
using namespace std;

int main()
{
    int num;
    char choice;

    do
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num % 2 == 0)
        {
            cout << num << " is Even" << endl;
        }
        else
        {
            cout << num << " is Odd" << endl;
        }

        cout << "\nProgram band karne ke liye 's' dabao, continue karne ke liye koi bhi key dabao: ";
        cin >> choice;

    } while (choice != 's' && choice != 'S');

    cout << "Program Stopped!";
    
    return 0;
}