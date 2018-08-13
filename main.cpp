#include <iostream>

using namespace std;

int main()
{
    int operation = 0, A = 0, B = 0, a = 0, b = 0;
    cout << " TARA MAG MATH TAYO \n\n";
    cout << " A. Addition (+) \n " << " B. Subtraction (-) \n\n";
    cout << " Input first number. ";
    cin >> a;
    cout << " Input second number. ";
    cin >> b;
    cout << " Input your desired operation to use. ";
    cin >> operation;


    if (operation == A)
    {
        cout << a << " + " << b << " = " << a+b << " ";
    }

    else if (operation == B)
    {
        cout << a << " - " << b << " = " << a-b << " ";
    }

}
