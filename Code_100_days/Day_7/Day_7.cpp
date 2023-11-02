#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void handleSpace(string name, string feeling) {
    string choice;
    cout << "Oh I love space, what would you like to talk about specifically " << name <<"? planets or exploration?" << endl;
    cin >> choice;
    if(choice == "planets"){
        cout << "I love planets, which planet do you love more, mars or jupiter??(yes or no)" << endl;
        cin >> choice;
        if(choice == "mars"){
            cout << "Oh I love Mars, it's such an interesting planet!";
        }
        else if (choice == "jupiter"){
            cout << "It's an amazing planet! but I personally like saturn! with its nice big rings.";
        }
        cout << " Is there anything else you'd like to talk about?" <<endl;
    }
    else if(choice == "exploration"){
        cout << "Ooh that's amazing, I love exploring, do you want to be an astronaut later?" << endl;
        if(choice == "yes"){
            cout << "That's amazing, I'm rooting for you!";
        }
        else if(choice == "no"){
            cout << "I understand, space is scary isn't it";
        }
        else{
            cout << "I don't understand, is there anything else you'd like to talk about?";
        }
        cout << " Is there anything else you'd like to talk about?" <<endl;
    }
}

void handleMusic(string name, string feeling) {
    string choice;
    cout << "Music is a universal language! What genre do you like " << name << "? classical or rock?" << endl;
    cin >> choice;
    if(choice == "classical"){
        cout << "Ah, the beauty of classical music. Do you have a favorite composer? Beethoven or Mozart?" << endl;
        cin >> choice;



        if(feeling == "sad"){
            if(choice == "beethoven"){
                cout << "Ah, Beethoven's symphonies are a marvel, maybe you could listen to them to cheer up!";
            }
            else if (choice == "mozart"){
                cout << "Mozart's melodies are timeless indeed! I like to listen to them when I'm sad.";
            }
        }
        else{
            if(choice == "beethoven"){
                cout << "Ah, Beethoven's symphonies are a marvel, they make me happy just as you are now!";
            }
            else if (choice == "mozart"){
                cout << "Mozart's melodies are timeless indeed, I'm glad you're happy " << name << "!";
            }
        }
        cout << " Is there anything else you'd like to discuss in music?" << endl;
    }
    else if(choice == "rock"){
        cout << "Rock on! Do you prefer older rock bands like The Beatles or newer ones like Imagine Dragons?" << endl;
        cin >> choice;
        if(choice == "The Beatles"){
            cout << "Classic choice! They've left a huge mark in music history.";
        }
        else if(choice == "Imagine Dragons"){
            cout << "Their tracks are really catchy and energizing!";
        }
        cout << " Anything else in the realm of music you'd like to delve into?" << endl;
    }
}

void handleElectronics(string name, string feeling) {
    string choice;
    cout << "Electronics is fascinating! Are you more interested in microcontrollers or circuit design?" << endl;
    cin >> choice;
    if(choice == "microcontrollers"){
        cout << "Microcontrollers are so versatile. Do you prefer Arduino or Raspberry Pi?" << endl;
        cin >> choice;
        if(choice == "Arduino"){
            cout << "Arduino boards are great for beginners and hobbyists such as yourself " << name << ".";
        }
        else if (choice == "Raspberry Pi"){
            cout << "Raspberry Pi offers a lot more computational power. Good for small projects!";
        }
        cout << " Any other electronics topic on your mind?" << endl;
    }
    else if(choice == "circuit design"){
        cout << "Designing circuits is both an art and science! Do you enjoy analog or digital circuits?" << endl;
        cin >> choice;
        if(choice == "analog"){
            cout << "Analog circuits have their unique charm, don't they " << name << ".";
        }
        else if(choice == "digital"){
            cout << "Digital circuits are the backbone of modern electronics!";
        }
        cout << " What else about electronics would you like to chat about?" << endl;
    }
}

void handleDance(string name, string feeling) {
    string choice;
    cout << "Dancing is a beautiful art form. Do you lean more towards classical or contemporary styles?" << endl;
    cin >> choice;
    if(choice == "classical"){
        cout << "Classical dances have rich histories. Ballet or Kathak?" << endl;
        cin >> choice;
        if(choice == "Ballet"){
            cout << "Ballet is the epitome of grace!";
        }
        else if (choice == "Kathak"){
            cout << "Kathak's intricate footwork and spins are mesmerizing!";
        }
        cout << " Anything else about dance you'd like to explore?" << endl;
    }
    else if(choice == "contemporary"){
        cout << "Contemporary dance is so expressive. Do you like hip-hop or modern dance?" << endl;
        cin >> choice;
        if(choice == "hip-hop"){
            cout << "I bet you're a great hip-hop dancer " << name <<"!";
        }
        else if(choice == "modern dance"){
            cout << "Modern dance beautifully merges various styles!";
        }
        cout << " Would you like to chat more about dance?" << endl;
    }
}

void defaultResponse(string name, string feeling) {
    cout << "I'm sorry " << name << ", I can only discuss certain topics. Here they are: space, music, electronics, dance." << endl;
}

int main(){
    string name;
    string choice;
    string feeling;
    // Initial greeting and name collection
    cout << "Hello there, my name is Jarvis. What is your name?" << endl;
    cin >> name;
    cout << "Well hello there " << name << ", how are you feeling today? happy or sad?" << endl;
    cin >> feeling;
    if(feeling == "sad"){
        cout << "Ah I'm sorry to hear that " << name << ". I hope you'll feel better soon. Is there anything you'd like to talk about?" << endl;
    }
    else if(feeling == "happy"){
        cout << "I'm very happy to hear that " << name << ". Is there anything you'd like to talk about?" << endl;
    }
    cout << feeling;
    while(true) {
        cin >> choice;

        // Convert choice to lower case
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

        if(choice == "exit") {
            cout << "Goodbye, it was nice talking to you!";
            break;
        }
        else if(choice == "space") {
            handleSpace(name, feeling);
        }
        else if(choice == "music") {
            handleMusic(name, feeling);
        }
        else if(choice == "electronics") {
            handleElectronics(name, feeling);
        }
        else if(choice == "dance") {
            handleDance(name, feeling);
        }
        else {
            defaultResponse(name, feeling);
        }
    }

    return 0;
}
