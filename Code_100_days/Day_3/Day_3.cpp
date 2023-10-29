#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    long long fib[200000];
    int amount;
    fib[0] = 1;
    fib [1] = 1;
    string yon;
    cout << "Please enter the amount of fibobacci numbers you want: " <<endl;
    cin >> amount;
    cout << "Would you like it to be printed backwards? 'y' or 'n'";
    cin >> yon;
    cout << endl << "Printing Fibonacci sequence: " << endl;

    if(amount < 1){
        cout <<endl << "Please enter a real amount" << endl;
    }
    else
    {

    for(int i = 2; i < amount; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    if(yon == "y"){
        for(int j = amount -1;  j >= 0; j--){
        cout << fib[j] << endl;
    }

    }
    else{
    for(int j = 0;  j < amount; j++){
        cout << fib[j] << endl;
    }
    }
    }
    return 0;
}
