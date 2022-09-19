#ifndef DISASSEMBLER_HPP
#define DISASSEMBLER_HPP

#include <iostream>
#include <memory>

namespace em
{
    class Disassembler
    {
        unsigned char *buffer;
        int prevOpSize;
    private:
        int instructionSize(char op); 
        
    public:
        Disassembler(unsigned char *buffer);

        std::unique_ptr<char[]> next();
        std::string nextInstruction();
        int getOpSize();
    };
}

#endif