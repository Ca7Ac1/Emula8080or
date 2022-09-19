#include "emulator.hpp"

namespace em
{
    Emulator::Emulator(std::string rom) : ops(NULL) 
    {
        std::ifstream byteReader(rom, std::ios::ate | std::ios::binary);

        if (byteReader.fail())
        {
            throw std::runtime_error("Couldn't read rom file");
        }

        size_t size = byteReader.tellg();

        byteReader.seekg(0, std::ios::beg);

        bytes = new unsigned char[size];
        for (int i = 0; i < size; i++)
        {
            byteReader >> bytes[i];
        }

        *ops = Disassembler(bytes, size);
    }

    Emulator::~Emulator() { delete[] bytes; }

    void Emulator::emulate() {}

    void Emulator::printOps() 
    {
        std::string op = ops->nextInstruction();

        while (!op.empty())
        {
            std::cout << op << '\n';
            op = ops->nextInstruction();
        }

        std::cout << std::flush;
    }
}