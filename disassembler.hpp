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
        
        size_t size;
        int prevOpSize;

        int instructionSize(char op) const;

    public:
        Disassembler(unsigned char *buffer, size_t size);

        std::unique_ptr<char[]> next();
        std::string nextInstruction();
        int getOpSize() const;
    };
}

#endif