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

//where the magic happens
int main()
{
    int dividen(getInput());
    cout << "divided by" << endl;
    int divisor(getInput());

    cout << endl << dividen / divisor << " remainder " << dividen % divisor;

    return 0;
}

