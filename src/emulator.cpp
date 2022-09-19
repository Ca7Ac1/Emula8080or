#include "emulator.hpp"

namespace em
{
    unsigned char *Emulator::readBytes(std::string rom)
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

        return bytes;
    }

    Emulator::Emulator(std::string rom) : bytes(NULL), read(0), ops(readBytes(rom), read) {}
    Emulator::~Emulator() { delete[] bytes; }

    void Emulator::emulate() {}

    void Emulator::printOps() 
    {
        std::string op = ops.nextInstruction();

        while (!op.empty())
        {
            std::cout << op << '\n';
            op = ops.nextInstruction();
        }
    }
}