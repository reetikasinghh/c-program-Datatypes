/* QUES: WRITE A PROGRAM TO DISPLAY THE SIZE OF GIVEN DATA TYPES*/
#include<iostream> 

int main()
{
    using namespace std; 

    // Declare variables to store different types of data.
    int myintvar;      // For storing whole numbers (integers).
    float myfloatvar;  // For storing numbers with decimal points (float).
    double mydoublevar; // For storing larger numbers with decimal points (double).
    char mycharvar;    // For storing single characters or symbols (char).
    bool myboolvar;    // For storing true (1) or false (0) values (boolean).

    // Ask the user to input different types of data.
    cout << "Please enter an integer: ";
    cin >> myintvar;

    cout << "Please enter a float: ";
    cin >> myfloatvar;

    cout << "Please enter a double: ";
    cin >> mydoublevar;

    cout << "Please enter a character: ";
    cin >> mycharvar;

    cout << "Please enter a boolean (0 or 1): ";
    cin >> myboolvar;

    // Display the sizes of the data types in bytes.
    cout << "The size of an integer is " << sizeof(myintvar) << " bytes." << endl;
    cout << "The size of a float is " << sizeof(myfloatvar) << " bytes." << endl;
    cout << "The size of a double is " << sizeof(mydoublevar) << " bytes." << endl;
    
    // Note: There's no need to display the size of 'charvar' as it's always 1 byte.
    
    cout << "The size of a boolean is " << sizeof(myboolvar) << " bytes." << endl;

    return 0; // Return 0 to indicate successful program execution.
}

/* OUTPUT
Enter a integer no.:45
Enter a float no.:45.2 
Enter a double no.:23.564
Enter a char no.: reetika
Enter a bool no.:the size of integer is 4bytes
the size of float is 4bytes
the size of double is 8bytes
the size of charvar is 1bytes
the size of boolean is 1bytes */

