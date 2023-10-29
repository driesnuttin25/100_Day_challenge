#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<long long> fib;
    int amount;
    string printReverse;
    cout << "Please enter the number of Fibonacci terms you want: ";
    cin >> amount;
    cout << "Would you like it to be printed backwards? 'y' or 'n': ";
    cin >> printReverse;

    if (amount < 1) {
        cout << "Please enter a valid amount." << endl;
        return 0;
    }

    fib.push_back(1);
    fib.push_back(1);

    for (int i = 2; i < amount; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }

    cout << "Printing Fibonacci sequence:" << endl;
    if (printReverse == "y") {
        for (int i = amount - 1; i >= 0; --i) {
            cout << fib[i] << endl;
        }
    } else {
        for (const auto &num : fib) {
            cout << num << endl;
        }
    }

    return 0;
}
