#include <iostream>

using namespace std;

int main()
{
    int dividen;
    int divisor;

    cout << "choose the dividend: ";
    cin >> dividen;
    cout << "choose the divisor: ";
    cin >> divisor;
    cout << endl << dividen / divisor << " remainder " << dividen % divisor;

    return 0;
}
