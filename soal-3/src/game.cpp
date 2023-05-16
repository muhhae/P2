#include "include/game.hpp"

Game::Game() {
    srand(unsigned(time(0)));
    srand(unsigned(rand()));
    secretNumber = rand() % 1000 + 1;
}

void Game::play(){
    using namespace std;
    int input;
    //cout<<secretNumber<<endl;
    while (input != secretNumber)
    {
        cin>>input;
        if (input > secretNumber) cout<<"Angka terlalu besar, ulangi!"<<endl;
        else if (input < secretNumber) cout<<"Angka terlalu kecil, ulangi!"<<endl;
    }
    cout<<"Selamat, anda menebak angka dengan benar!"<<endl;
}