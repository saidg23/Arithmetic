#include <iostream>

using namespace std;

int getInput()
{
    int in;
    cout << "enter a number: ";
    cin >> in;
    return in;
}

void divide(int x, int y)
{
    cout << endl << x / y << " remainder " << x % y;
}

int main()
{
    int dividen(getInput());
    cout << "divided by" << endl;
    int divisor(getInput());
    divide(dividen, divisor);

    return 0;
}

