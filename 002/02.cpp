#include <iostream>
using namespace std;
int main()
{
    int miles, cost, mpg, parking, tolls;
    cout << "Enter miles driven per day: ";
    cin >> miles;
    cout << "Enter cost per gallon of gas (in cents): ";
    cin >> cost;
    cout << "Enter average miles per gallon: ";
    cin >> mpg;
    cout << "Enter parking fees per day (in dollars): ";
    cin >> parking;
    cout << "Enter tolls per day (in dollars): ";
    cin >> tolls;
    int total = miles * cost / mpg / 100 + parking + tolls;
    cout << "\nYour daily driving cost is: " << total << endl;
}
