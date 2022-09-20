#ifndef DISASSEMBLER_HPP
#define DISASSEMBLER_HPP

#include <string>
#include <memory>
#include <vector>

namespace em
{
    class Disassembler
    {
    private:
        unsigned char *buffer;
        
        size_t size;
        int prevOpSize;

        int instructionSize(unsigned char op) const;

    public:
        Disassembler(unsigned char *buffer, size_t size);

        std::vector<unsigned char> next();
        std::string nextInstruction();
        int getOpSize() const;
    };
}

#endif