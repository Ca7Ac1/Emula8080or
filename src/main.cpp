#include <iostream>

using namespace std;

#include "emulator.hpp"

int main()
{
    em::Emulator spaceInvaders("roms/spaceinvaders/invaders.h");

    spaceInvaders.printOps();

    return 0;
}