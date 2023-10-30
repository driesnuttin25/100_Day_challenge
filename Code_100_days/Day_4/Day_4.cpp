#include <stdio.h>
#include <iostream>
using namespace std;

void add(int, int);
void subtract(int, int);
void multiply(int, int);
void divide (int, int);
void mod(int, int);

int main(int argc, char *argv[])
{
    char oper;
    int num1;
    int num2;
    string str_inp1;
    string str_check1 = "exit";
    string str_check2 = "continue";

    while(true){
        cout <<"Please enter an operator (+,-,*,/,%): " << endl;
        cin >> oper;
        cout <<"Please enter two numbers: " << endl;
        cin >> num1 >> num2;

        switch(oper){
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1,num2);
            break;
        case '%':
            mod(num1,num2);
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

void add(int num1, int num2){
    cout << num1 << "+" << num2 << "=" << num1 + num2;
};

void subtract(int num1, int num2){
    cout << num1 << "-" << num2 << "=" << num1 - num2;
};

void multiply(int num1, int num2){
    cout << num1 << "*" << num2 << "=" << num1 * num2;
};

void divide(int num1, int num2){
    if(num2 == 0){
        cout << endl << "You can't devide by 0" << endl;
    }
    else{
        cout << num1 << "/" << num2 << "=" << num1 / num2;
    }
};

void mod(int num1, int num2){
    cout << num1 << "%" << num2 << "=" << num1 % num2;
};
