#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <cstdint>
#include <vector>
#include <stdexcept>

namespace em
{
    enum ConditionCodes
    {
        z = 1,
        s = 1,
        p = 1,
        cy = 1,
        ac = 1,
        pad = 3
    };

    class Processor
    {
    private:
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
        uint8_t e;
        uint8_t h;
        uint8_t l;

        uint8_t intEnable;

        uint16_t sp;
        uint16_t pc;

        uint8_t **memory;

        ConditionCodes cc;

    public:
        Processor(uint8_t **memory);

        void process(const std::vector<unsigned char> &op, int opCount);
    };
}

#endif