#include <iostream>
#include "include/game.hpp"
using namespace std;

int main() {
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        Game m_game;
        cout<<"Kunci ke-"<<i+1<<":"<<endl;
        m_game.play();
    }
    return 0;
}