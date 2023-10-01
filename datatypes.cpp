#include<iostream>
int main()
{
    using namespace std;

    int myintvar;     // Declare an integer variable to store whole numbers.
    float myfloatvar; // Declare a float variable to store numbers with decimals.
    double mydoublevar; // Declare a double variable to store larger numbers with decimals.
    char mycharvar;   // Declare a character variable to store single letters or symbols.
    bool myboolvar;   // Declare a boolean variable to store true or false values.

    // allow the user to enter an integer and store it in 'myintvar'.
    cout << "Enter an integer: ";
    cin >> myintvar;

    // allow the user to enter a float and store it in 'myfloatvar'.
    cout << "Enter a float: ";
    cin >> myfloatvar;

    // allow the user to enter a double and store it in 'mydoublevar'.
    cout << "Enter a double: ";
    cin >> mydoublevar;

    // allow the user to enter a character and store it in 'mycharvar'.
    cout << "Enter a character: ";
    cin >> mycharvar;

    // allow the user to enter a boolean (0 or 1) and store it in 'myboolvar'.
    cout << "Enter a boolean (0 or 1): ";
    cin >> myboolvar;

    // Display the values entered by the user.
    cout << "Integer: " << myintvar;
    cout << "Float: " << myfloatvar;
    cout << "Double: " << mydoublevar;
    cout << "Character: " << mycharvar;
    cout << "Boolean: " << myboolvar;

    return 0;
}
/*OUTPUT
Enter a integer no.:23
Enter a float no.:12.2
Enter a double no.:12.45
Enter a char no.:reetika
Enter a bool no.:Integer no.:23Float no.:12.2double no.:12.45char :rbool:0*/
