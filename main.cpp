#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "Game.h"
#include "well.h"

using namespace std;

int main() {
    string name;
    
    // cout << "Enter your name: " << endl;
    // cin >> name;

    Game game;
    game.renderGame();
}