#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void create(){
    string name;
    cout << "Please select a .txtfile name: ";
    cin >> name;
    ofstream file(name);
    cout << endl << "Created file" << endl;
};
void write(){
    string name1;
    char text[300];
    cout << "To which file would you like to write?: ";
    cin >> name1;
    ofstream file(name1);
    if(!file.is_open()){
        cout << "No such file in directory.";
    }
    else{
        cout << "Writing in file:" << endl;
        cin.ignore();
        cin.getline(text, sizeof(text));
        file << text;
        file.close();
    }
};
void read(){
    string name2;
    string text1;
    cout << "Which file would you like to read?: ";
    cin >> name2;
    ifstream file(name2);
    if(!file.is_open()){
        cout << "No such file in directory.";
    }
    else{
        cout << "Reading in file:" << endl;
        string text;
        text.assign((istreambuf_iterator<char>(file)),
                    (istreambuf_iterator<char>()));
        cout << text << endl;
        file.close();
    }
};
void append(){
    string name3;
    char text[300];
    cout << "To which file would you like to append?: ";
    cin >> name3;
    ofstream file(name3, ios::app);
    if(!file.is_open()){
        cout << "No such file in directory.";
    }
    else{
        cout << "Appending to file:" << endl;
        cin.ignore();
        cin.getline(text, sizeof(text));
        file << text << endl;
        file.close();
    }
};

int main(){
    string option;
    while(true){
    cout << "Please select an option" << endl << "- Create" << endl << "- Write" << endl << "- Read" << endl << "- Append" << endl << "- Exit" << endl << "Option = ";
    cin >> option;
    if(option == "create"){
        create();
    }
    else if(option == "write"){
        write();
    }
    else if(option == "read"){
        read();
    }
    else if(option == "append"){
        append();
    }
    else if(option == "exit"){
        cout <<"Exiting....." << endl;
        return 0;
    }
    else{
        cout<< "Please enter a valid option" << endl;
    }
    }
    return 0;
}
