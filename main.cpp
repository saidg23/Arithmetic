using namespace std;

int getInput()
{
    int in;
    cout << "enter a number: ";
    cin >> in;
    return in;
}

int main()
{
    int dividen(getInput());
    cout << "divide by" << endl;
    int divisor(getInput());

    cout << endl << dividen / divisor << " remainder " << dividen % divisor;

    return 0;
}

