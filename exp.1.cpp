/* QUES: WRITE A PROGRAM TO MAKE A CALCULATOR WITH BASIC OPERATIONS*/

#include <iostream> // Include the necessary header file for input and output.

using namespace std;

int main() {

  char op; // Declare a character variable to store the operator (+, -, *, /).
  float num1, num2; // Declare two floating-point variables to store the numbers.

  cout << "Enter any operator: +, -, *, /: "; //allow the user to enter an operator.
  cin >> op; // Read the operator entered by the user.

  cout << "Enter two numbers: "; 
  cin >> num1 >> num2; //

  switch(op) { // Use a switch statement to perform different operations based on the operator entered.

    case '+':
      cout <<  " Sum= " << num1 + num2; // If the operator is '+', calculate and display the sum.
      break;

    case '-':
      cout << " Difference= " << num1 - num2; // If the operator is '-', calculate and display the difference.
      break;

    case '*':
      cout  << " Product= " << num1 * num2; // If the operator is '*', calculate and display the product.
      break;

    case '/':
      cout <<  " Quotient= " << num1 / num2; // If the operator is '/', calculate and display the quotient.
      break;

    default:
    
      cout << "Error! Operator is not correct";
      break;
  }

  return 0;
}

/*Enter any operator: +, -, *, /:
+
Enter two numbers: 45
12
 Sum= 57


Enter any operator: +, -, *, /: *
Enter two numbers: 45
56
 Product= 2520*/