#include <iostream>

using namespace std;

//gets user input for use in divide()
int getInput()
{
    int in;
    cout << "enter a number: ";
    cin >> in;
    return in;
}

//this divides and prints the results(to be added)

//where the magic happens
int main()
{
    int dividen(getInput());
    cout << "divided by" << endl;
    int divisor(getInput());

    cout << endl << dividen / divisor << " remainder " << dividen % divisor;

    return 0;
}

