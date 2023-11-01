#include <iostream>
#include <fstream>
#include <random>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    srand(time(0));

    string name;
    string choice;
    int random;
    cout << "Hello there, my name is Jarvis. What is your name?" << endl;
    cin >> name;
    cout << "Oh well hello there " << name << ", It's very nice to meet you. What would you like to talk about?" << endl;
    while (true){
        cin >> choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
        // Generate a random number from 1 to 10
        random_device rd;
        mt19937 gen(rd());
        std::uniform_int_distribution<> distr(1, 10);
        random = distr(gen);
        if(choice == "goodbye"){
            cout << "Goodbye, it was nice talking to you!";
            return 0;
        }
        if(choice == "space"){
            switch (random) {
            case 1:
                cout << "Oh, space exploration fascinates me!" << endl;
                break;
            case 2:
                cout << "I've always been intrigued by the mysteries of the universe." << endl;
                break;
            case 3:
                cout << "Space exploration is a topic that leaves me in awe." << endl;
                break;
            case 4:
                cout << "Exploring the cosmos is the ultimate human adventure." << endl;
                break;
            case 5:
                cout << "I dream of a future where we explore distant galaxies." << endl;
                break;
            case 6:
                cout << "The universe is a vast playground of wonders to discover." << endl;
                break;
            case 7:
                cout << "Space exploration inspires the imagination of generations." << endl;
                break;
            case 8:
                cout << "I'm amazed by the achievements of astronauts and scientists." << endl;
                break;
            case 9:
                cout << "Space is the final frontier, and we are its pioneers." << endl;
                break;
            case 10:
                cout << "Exploring space requires courage and dedication." << endl;
                break;
            default:
                cout << "I have no idea how I got this number." << endl;
            }
        }


        if(choice == "music"){
            switch (random) {
            case 1:
                cout << "Ah, music is the universal language of emotions." << endl;
                break;
            case 2:
                cout << "I enjoy listening to a wide variety of music genres." << endl;
                break;
            case 3:
                cout << "Music has a way of connecting people from all walks of life." << endl;
                break;
            case 4:
                cout << "Melodies and rhythms can evoke powerful feelings." << endl;
                break;
            case 5:
                cout << "Music has the power to heal and uplift the soul." << endl;
                break;
            case 6:
                cout << "I believe that music is a fundamental part of human culture." << endl;
                break;
            case 7:
                cout << "Listening to music is a great way to relax and unwind." << endl;
                break;
            case 8:
                cout << "Musicians are like magicians who create sonic magic." << endl;
                break;
            case 9:
                cout << "I can't imagine a world without the beauty of music." << endl;
                break;
            case 10:
                cout << "Music can transport us to different emotional landscapes." << endl;
                break;
            default:
                cout << "I don't have any opinions on that topic." << endl;
            }
        }

        if(choice == "electronics"){
            switch (random) {
            case 1:
                cout << "Electronics is a field full of endless possibilities." << endl;
                break;
            case 2:
                cout << "I find working with electronic components quite satisfying." << endl;
                break;
            case 3:
                cout << "Electronics is at the heart of modern technology." << endl;
                break;
            case 4:
                cout << "Circuit design is like solving puzzles for me." << endl;
                break;
            case 5:
                cout << "I'm always excited to learn about the latest electronic innovations." << endl;
                break;
            case 6:
                cout << "Electronics is where creativity meets engineering." << endl;
                break;
            case 7:
                cout << "Soldering components together feels like magic." << endl;
                break;
            case 8:
                cout << "I believe that electronics will shape the future." << endl;
                break;
            case 9:
                cout << "Exploring the world of microcontrollers is a thrilling journey." << endl;
                break;
            case 10:
                cout << "In electronics, there's always something new to discover." << endl;
                break;
            default:
                cout << "I don't have any opinions on that topic." << endl;
            }
        }

        if(choice == "dance"){
            switch (random) {
            case 1:
                cout << "Dancing is a wonderful way to express oneself." << endl;
                break;
            case 2:
                cout << "I've always admired the grace and skill of dancers." << endl;
                break;
            case 3:
                cout << "Dancing can bring so much joy and energy to life." << endl;
                break;
            case 4:
                cout << "The art of dance is a mesmerizing form of storytelling." << endl;
                break;
            case 5:
                cout << "I appreciate the dedication and discipline required for dance." << endl;
                break;
            case 6:
                cout << "Dancers are like poetry in motion." << endl;
                break;
            case 7:
                cout << "Whether it's ballet or hip-hop, dance is a universal language." << endl;
                break;
            case 8:
                cout << "Dance performances can leave a lasting impression on the audience." << endl;
                break;
            case 9:
                cout << "I admire the creativity and innovation in contemporary dance." << endl;
                break;
            case 10:
                cout << "Dance is a celebration of the human body's capabilities." << endl;
                break;
            default:
                cout << "I don't have any opinions on that topic." << endl;
            }
        }
        }

    return 0;
}
