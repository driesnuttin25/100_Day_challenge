#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    while(true){
        int x = 0;
        string str1;
        string str2;
        cout << "Please enter a string (or exit to stop): ";
        cin >> str1;
        if(str1 == "exit"){
            return 0;
        }
        //cout << str1 << endl;
        //cout << str1.length() << endl;
        str2.resize(str1.length());
        for(int i = str1.length()-1 ; i >= 0; i--){
            str2[x] = str1[i];
            x = x +1;
        };
        cout << "The reverse of " << str1 << " is:" << endl << "-----------" << endl << str2 << endl << "-----------" << endl;
        for(int i = 0; i < str1.length(); i++){
            int s1 = str1[i];
            int s2 = str2[i];
            str1[i] = tolower(s1);
            str2[i] = tolower(s2);
        };
        //cout << str1 << endl << str2 << endl;
        if(str1 == str2){
            cout << "The word " << str1 << " is a Palindrome" << endl << endl;
        }
    }
    return 0;
}
