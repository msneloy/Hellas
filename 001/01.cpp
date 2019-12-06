#include <iostream>  //standard input-output stream
using namespace std; //standard namespace. cout, cin and a lot of other things are defined in it.

int main()
{
    int num1;     //
    int num2;     //
    int num3;     //
    int smallest; //
    int largest;  // declaration

    cout << "Input three different integers: "; // prompt
    cin >> num1 >> num2 >> num3;                // input

    largest = num1; // assume first number is largest

    if (num2 > largest) // is num2 larger?
        largest = num2; //

    if (num3 > largest) // is num3 larger?
        largest = num3; //

    smallest = num1; // assume first number is smallest

    if (num2 < smallest) //
        smallest = num2; //

    if (num3 < smallest) //
        smallest = num3; //

    cout << "Sum is " << num1 + num2 + num3             //sum of 3 numbers
         << "\nAverage is " << (num1 + num2 + num3) / 3 //average of 3 numbers
         << "\nProduct is " << num1 * num2 * num3       //
         << "\nSmallest is " << smallest                //
         << "\nLargest is " << largest << endl;         //

    return 0;
}
