#ifndef DISASSEMBLER_HPP
#define DISASSEMBLER_HPP

#include <string>
#include <memory>
#include <vector>
#include <sstream>
#include <iomanip>
#include <stdexcept>

namespace em
{
    class Disassembler
    {
    private:
        unsigned char *buffer;

        size_t pos;
        size_t size;
        int prevOpSize;

        int instructionSize(unsigned char op) const;

    public:
        Disassembler(unsigned char *buffer, size_t size);

        std::vector<unsigned char> next();
        std::string nextInstruction();
        int getPos();
        void jump(size_t loc);
        int getOpSize() const;
    };
}

#endif