#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "choose the dividend: ";
    cin >> x;
    cout << "choose the divisor: ";
    cin >> y;
    cout << endl << x / y << " remainder " << x % y;
    return 0;
}
