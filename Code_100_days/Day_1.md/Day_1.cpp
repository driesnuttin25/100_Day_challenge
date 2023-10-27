#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    char oper;
    int num1;
    int num2;
    string str_inp1;
    string str_check1 = "exit";
    string str_check2 = "continue";
    bool resume = true;

    while(resume = true){
    cout <<"Please enter an operator (+,-,*,/): " << endl;
    cin >> oper;
    cout <<"Please enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch(oper){
    case '+':
        cout << num1 << "+" << num2 << "=" << num1 + num2;
    break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1 - num2;
    break;
    case '*':
           cout << num1 << "*" << num2 << "=" << num1 * num2;
    break;
    case '/':
    if(num2 == 0){
        cout << endl << "You can't devide by 0" << endl;
    }
    else{
        cout << num1 << "/" << num2 << "=" << num1 / num2;
    }
    break;
    }

    while (true){
    cout << endl << "Please type 'continue' or 'exit'" << endl;
    cin >> str_inp1;
    if (str_inp1 == str_check1){
    return 0;
    }
    else if(str_inp1 == str_check2){
    cout << "Continuing" << endl;
    break;
    }
    }
}
    return 0;
}
