#ifndef EMULATOR_HPP
#define EMULATOR_HPP

#include "disassembler.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <memory>

namespace em
{
    class Emulator
    {
    private:
        Disassembler ops;

        unsigned char *bytes;
        size_t read;

        unsigned char *readBytes(std::string rom);

    public:
        Emulator(std::string rom);
        ~Emulator();

        void emulate();
        void printOps();
    };
}

#endif