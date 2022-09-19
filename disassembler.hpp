#ifndef DISASSEMBLER_HPP
#define DISASSEMBLER_HPP

#include <string>
#include <memory>

namespace em
{
    class Disassembler
    {
    private:
        unsigned char *buffer;
        
        int size;
        int prevOpSize;
        int instructionSize(char op); 
        
    public:
        Disassembler(unsigned char *buffer, int size);

        std::unique_ptr<char[]> next();
        std::string nextInstruction();
        int getOpSize();
    };
}

#endif