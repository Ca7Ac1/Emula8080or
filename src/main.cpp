#include <iostream>

using namespace std;

#include "emulator.hpp"

int main()
{
    em::Emulator spaceInvaders("roms/spaceinvaders/invaders.concatenated");

    // spaceInvaders.printOps();
    spaceInvaders.emulate();

    return 0;
}