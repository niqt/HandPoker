#include <iostream>
#include "Game.h"
#include <string>

using namespace std;

int main()
{

    Game game;
    string theWinner = game.play();

    cout << "The result is " << theWinner << "\n";
    return 0;
}


