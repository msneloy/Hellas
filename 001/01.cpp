#include <iostream>  //standard input-output stream
using namespace std; //standard namespace. cout, cin and a lot of other things are defined in it.

int main()
{
    int num1, num2, num3;     //
    int smallest, largest;  // declaration

    cout << "Input three different integers: "; // prompt
    cin >> num1 >> num2 >> num3;                // input

    largest = num1; // programme assumes first number to be largest

    if (num2 > largest) // is num2 larger?
        largest = num2; // if yes then the largest is num2

    if (num3 > largest) // is num3 larger?
        largest = num3; // if yes then the largest is num2

    smallest = num1; // programme assumes first number to be smallest

    if (num2 < smallest) //is num2 smaller
        smallest = num2; //if yes then the smallest is num2

    if (num3 < smallest) //is num3 smaller
        smallest = num3; //if yes then the smallest is num3

    cout << "Sum is " << num1 + num2 + num3             // addition output
         << "\nAverage is " << (num1 + num2 + num3) / 3 //Average output
         << "\nProduct is " << num1 * num2 * num3       //Product output
         << "\nSmallest is " << smallest                //Smallest number
         << "\nLargest is " << largest << endl;         //Largest number

    return 0;
}
