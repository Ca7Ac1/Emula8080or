#include <iostream>

using namespace std;

#include "emulator.hpp"

int main()
{
    em::Emulator spaceInvaders("roms/spaceinvaders/invaders.e");

    spaceInvaders.printOps();

    return 0;
}