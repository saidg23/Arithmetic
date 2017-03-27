#include <iostream>

using namespace std;

//gets user input for use in the formula
int getInput()
{
    int in;
    cout << "enter a number: ";
    cin >> in;
    return in;
}

//divides and prints results
void divide(int x, int y)
{
    cout << endl << x / y << " remainder " << x % y;
}

//this is where the magic happens
int main()
{
    int dividen(getInput());
    cout << "divided by" << endl;
    int divisor(getInput());
    divide(dividen, divisor);

    return 0;
}

