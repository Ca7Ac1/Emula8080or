#ifndef EMULATOR_HPP
#define EMULATOR_HPP

#include "disassembler.hpp"
#include "state.hpp"

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <string>
#include <memory>
#include <stdexcept>

namespace em
{
    class Emulator
    {
    private:
        Disassembler *ops;
        State state;

        unsigned char *bytes;

        uint8_t *memory;

    public:
        Emulator(std::string rom);
        ~Emulator();

        void emulate();
        void printOps();
    };
}

#endif