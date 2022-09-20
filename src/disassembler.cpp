#include "disassembler.hpp"

namespace em
{
    Disassembler::Disassembler(unsigned char *buffer, size_t size) : buffer(buffer), size(size), prevOpSize(0) {}

    int Disassembler::instructionSize(unsigned char op) const
    {
        switch (op)
        {
        case 0x00:
            return 1;
        case 0x01:
            return 3;
        case 0x02:
            return 1;
        case 0x03:
            return 1;
        case 0x04:
            return 1;
        case 0x05:
            return 1;
        case 0x06:
            return 2;
        case 0x07:
            return 1;
        case 0x08:
            return 1;
        case 0x09:
            return 1;
        case 0x0a:
            return 1;
        case 0x0b:
            return 1;
        case 0x0c:
            return 1;
        case 0x0d:
            return 1;
        case 0x0e:
            return 2;
        case 0x0f:
            return 1;
        case 0x11:
            return 3;
        case 0x12:
            return 1;
        case 0x13:
            return 1;
        case 0x14:
            return 1;
        case 0x15:
            return 1;
        case 0x16:
            return 2;
        case 0x17:
            return 1;
        case 0x18:
            return 1;
        case 0x19:
            return 1;
        case 0x1a:
            return 1;
        case 0x1b:
            return 1;
        case 0x1c:
            return 1;
        case 0x1d:
            return 1;
        case 0x1e:
            return 2;
        case 0x1f:
            return 1;
        case 0x20:
            return 1;
        case 0x21:
            return 3;
        case 0x22:
            return 3;
        case 0x23:
            return 1;
        case 0x24:
            return 1;
        case 0x25:
            return 1;
        case 0x26:
            return 2;
        case 0x27:
            return 1;
        case 0x28:
            return 1;
        case 0x29:
            return 1;
        case 0x2a:
            return 3;
        case 0x2b:
            return 1;
        case 0x2c:
            return 1;
        case 0x2d:
            return 1;
        case 0x2e:
            return 2;
        case 0x2f:
            return 1;
        case 0x30:
            return 1;
        case 0x31:
            return 3;
        case 0x32:
            return 3;
        case 0x33:
            return 1;
        case 0x34:
            return 1;
        case 0x35:
            return 1;
        case 0x36:
            return 2;
        case 0x37:
            return 1;
        case 0x39:
            return 1;
        case 0x3a:
            return 3;
        case 0x3b:
            return 1;
        case 0x3c:
            return 1;
        case 0x3d:
            return 1;
        case 0x3e:
            return 2;
        case 0x3f:
            return 1;
        case 0x40:
            return 1;
        case 0x41:
            return 1;
        case 0x42:
            return 1;
        case 0x43:
            return 1;
        case 0x44:
            return 1;
        case 0x45:
            return 1;
        case 0x46:
            return 1;
        case 0x47:
            return 1;
        case 0x48:
            return 1;
        case 0x49:
            return 1;
        case 0x4a:
            return 1;
        case 0x4b:
            return 1;
        case 0x4c:
            return 1;
        case 0x4d:
            return 1;
        case 0x4e:
            return 1;
        case 0x4f:
            return 1;
        case 0x50:
            return 1;
        case 0x51:
            return 1;
        case 0x52:
            return 1;
        case 0x53:
            return 1;
        case 0x54:
            return 1;
        case 0x55:
            return 1;
        case 0x56:
            return 1;
        case 0x57:
            return 1;
        case 0x58:
            return 1;
        case 0x59:
            return 1;
        case 0x5a:
            return 1;
        case 0x5b:
            return 1;
        case 0x5c:
            return 1;
        case 0x5d:
            return 1;
        case 0x5e:
            return 1;
        case 0x5f:
            return 1;
        case 0x60:
            return 1;
        case 0x61:
            return 1;
        case 0x62:
            return 1;
        case 0x63:
            return 1;
        case 0x64:
            return 1;
        case 0x65:
            return 1;
        case 0x66:
            return 1;
        case 0x67:
            return 1;
        case 0x68:
            return 1;
        case 0x69:
            return 1;
        case 0x6a:
            return 1;
        case 0x6b:
            return 1;
        case 0x6c:
            return 1;
        case 0x6d:
            return 1;
        case 0x6e:
            return 1;
        case 0x6f:
            return 1;
        case 0x70:
            return 1;
        case 0x71:
            return 1;
        case 0x72:
            return 1;
        case 0x73:
            return 1;
        case 0x74:
            return 1;
        case 0x75:
            return 1;
        case 0x76:
            return 1;
        case 0x77:
            return 1;
        case 0x78:
            return 1;
        case 0x79:
            return 1;
        case 0x7a:
            return 1;
        case 0x7b:
            return 1;
        case 0x7c:
            return 1;
        case 0x7d:
            return 1;
        case 0x7e:
            return 1;
        case 0x7f:
            return 1;
        case 0x80:
            return 1;
        case 0x81:
            return 1;
        case 0x82:
            return 1;
        case 0x83:
            return 1;
        case 0x84:
            return 1;
        case 0x85:
            return 1;
        case 0x86:
            return 1;
        case 0x87:
            return 1;
        case 0x88:
            return 1;
        case 0x89:
            return 1;
        case 0x8a:
            return 1;
        case 0x8b:
            return 1;
        case 0x8c:
            return 1;
        case 0x8d:
            return 1;
        case 0x8e:
            return 1;
        case 0x8f:
            return 1;
        case 0x90:
            return 1;
        case 0x91:
            return 1;
        case 0x92:
            return 1;
        case 0x93:
            return 1;
        case 0x94:
            return 1;
        case 0x95:
            return 1;
        case 0x96:
            return 1;
        case 0x97:
            return 1;
        case 0x98:
            return 1;
        case 0x99:
            return 1;
        case 0x9a:
            return 1;
        case 0x9b:
            return 1;
        case 0x9c:
            return 1;
        case 0x9d:
            return 1;
        case 0x9e:
            return 1;
        case 0x9f:
            return 1;
        case 0xa0:
            return 1;
        case 0xa1:
            return 1;
        case 0xa2:
            return 1;
        case 0xa3:
            return 1;
        case 0xa4:
            return 1;
        case 0xa5:
            return 1;
        case 0xa6:
            return 1;
        case 0xa7:
            return 1;
        case 0xa8:
            return 1;
        case 0xa9:
            return 1;
        case 0xaa:
            return 1;
        case 0xab:
            return 1;
        case 0xac:
            return 1;
        case 0xad:
            return 1;
        case 0xae:
            return 1;
        case 0xaf:
            return 1;
        case 0xb0:
            return 1;
        case 0xb1:
            return 1;
        case 0xb2:
            return 1;
        case 0xb3:
            return 1;
        case 0xb4:
            return 1;
        case 0xb5:
            return 1;
        case 0xb6:
            return 1;
        case 0xb7:
            return 1;
        case 0xb8:
            return 1;
        case 0xb9:
            return 1;
        case 0xba:
            return 1;
        case 0xbb:
            return 1;
        case 0xbc:
            return 1;
        case 0xbd:
            return 1;
        case 0xbe:
            return 1;
        case 0xbf:
            return 1;
        case 0xc0:
            return 1;
        case 0xc1:
            return 1;
        case 0xc2:
            return 3;
        case 0xc3:
            return 3;
        case 0xc4:
            return 3;
        case 0xc5:
            return 1;
        case 0xc6:
            return 2;
        case 0xc7:
            return 1;
        case 0xc8:
            return 1;
        case 0xc9:
            return 1;
        case 0xca:
            return 3;
        case 0xcb:
            return 1;
        case 0xcc:
            return 3;
        case 0xcd:
            return 3;
        case 0xce:
            return 2;
        case 0xcf:
            return 1;
        case 0xd0:
            return 1;
        case 0xd1:
            return 1;
        case 0xd2:
            return 1;
        case 0xd3:
            return 1;
        case 0xd4:
            return 1;
        case 0xd5:
            return 1;
        case 0xd6:
            return 2;
        case 0xd7:
            return 1;
        case 0xd8:
            return 1;
        case 0xd9:
            return 1;
        case 0xda:
            return 3;
        case 0xdb:
            return 2;
        case 0xdc:
            return 3;
        case 0xdd:
            return 1;
        case 0xde:
            return 2;
        case 0xdf:
            return 1;
        case 0xe0:
            return 1;
        case 0xe1:
            return 1;
        case 0xe2:
            return 3;
        case 0xe3:
            return 1;
        case 0xe4:
            return 3;
        case 0xe5:
            return 1;
        case 0xe6:
            return 2;
        case 0xe7:
            return 1;
        case 0xe8:
            return 1;
        case 0xe9:
            return 1;
        case 0xea:
            return 3;
        case 0xeb:
            return 1;
        case 0xec:
            return 3;
        case 0xed:
            return 1;
        case 0xee:
            return 2;
        case 0xef:
            return 1;
        case 0xf0:
            return 1;
        case 0xf1:
            return 1;
        case 0xf2:
            return 3;
        case 0xf3:
            return 1;
        case 0xf4:
            return 3;
        case 0xf5:
            return 1;
        case 0xf6:
            return 2;
        case 0xf7:
            return 1;
        case 0xf8:
            return 1;
        case 0xf9:
            return 1;
        case 0xfa:
            return 3;
        case 0xfb:
            return 1;
        case 0xfc:
            return 3;
        case 0xfd:
            return 1;
        case 0xfe:
            return 2;
        case 0xff:
            return 1;
        }

        return 0;
    }

    std::vector<unsigned char> Disassembler::next()
    {
        if (size == 0)
        {
            prevOpSize = 0;
            return std::vector<unsigned char>(0, '\0');
        }

        prevOpSize = instructionSize(*buffer);
        std::vector<unsigned char> op(prevOpSize, '\0');

        for (int i = 0; i < prevOpSize; i++)
        {
            op[i] = *buffer;
            buffer++;
        }

        size -= prevOpSize;

        return op;
    }

    std::string Disassembler::nextInstruction()
    {
        std::vector<unsigned char> op = next();

        if (op.empty())
        {
            return "";
        }

        switch (op[0])
        {
        case 0x00:
            return "NOP";
        case 0x01:
            return "LXI   B  (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x02:
            return "STAX  B";
        case 0x03:
            return "INX   B";
        case 0x04:
            return "INR   B";
        case 0x05:
            return "DCR   B";
        case 0x06:
            return "MVI   B  (" + std::string(1, op[1]) + ")";
        case 0x07:
            return "RLC";
        case 0x08:
            return "NOP";
        case 0x09:
            return "DAD   B";
        case 0x0a:
            return "LDAX  B";
        case 0x0b:
            return "DCX   B";
        case 0x0c:
            return "INR   C";
        case 0x0d:
            return "DCR   C";
        case 0x0e:
            return "MVI   C  (" + std::string(1, op[1]) + ")";
        case 0x0f:
            return "RRC";
        case 0x11:
            return "LXI   D  (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x12:
            return "STAX  D";
        case 0x13:
            return "INX   D";
        case 0x14:
            return "INR   D";
        case 0x15:
            return "DCR   D";
        case 0x16:
            return "MVI   D  (" + std::string(1, op[1]) + ")";
        case 0x17:
            return "RAL";
        case 0x18:
            return "NOP";
        case 0x19:
            return "DAD   D";
        case 0x1a:
            return "LDAX  D";
        case 0x1b:
            return "DCX   D";
        case 0x1c:
            return "INR   E";
        case 0x1d:
            return "DCR   E";
        case 0x1e:
            return "MVI   E  (" + std::string(1, op[1]) + ")";
        case 0x1f:
            return "RAR";
        case 0x20:
            return "NOP";
        case 0x21:
            return "LXI   H  (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x22:
            return "SHLD     (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x23:
            return "INX   H";
        case 0x24:
            return "INR   H";
        case 0x25:
            return "DCR   H";
        case 0x26:
            return "MVI   H  (" + std::string(1, op[1]) + ")";
        case 0x27:
            return "DAA";
        case 0x28:
            return "NOP";
        case 0x29:
            return "DAD   H";
        case 0x2a:
            return "LHLD     (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x2b:
            return "DCX   H";
        case 0x2c:
            return "INR   L";
        case 0x2d:
            return "DCR   L";
        case 0x2e:
            return "MVI   L  (" + std::string(1, op[1]) + ")";
        case 0x2f:
            return "CMA";
        case 0x30:
            return "SIM";
        case 0x31:
            return "LXI   SP (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x32:
            return "STA      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x33:
            return "INX   SP";
        case 0x34:
            return "INR   M";
        case 0x35:
            return "DCR   M";
        case 0x36:
            return "MVI   M  (" + std::string(1, op[1]) + ")";
        case 0x37:
            return "STC";
        case 0x38:
            return "NOP";
        case 0x39:
            return "DAD   SP";
        case 0x3a:
            return "LDA      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0x3b:
            return "DCX   SP";
        case 0x3c:
            return "INR   A";
        case 0x3d:
            return "DCR   A";
        case 0x3e:
            return "MVI   A (" + std::string(1, op[1]) + ")";
        case 0x3f:
            return "CMC";
        case 0x40:
            return "MOV   BB";
        case 0x41:
            return "MOV   BC";
        case 0x42:
            return "MOV   BD";
        case 0x43:
            return "MOV   BE";
        case 0x44:
            return "MOV   BH";
        case 0x45:
            return "MOV   BL";
        case 0x46:
            return "MOV   BM";
        case 0x47:
            return "MOV   BA";
        case 0x48:
            return "MOV   CB";
        case 0x49:
            return "MOV   CC";
        case 0x4a:
            return "MOV   CD";
        case 0x4b:
            return "MOV   CE";
        case 0x4c:
            return "MOV   CH";
        case 0x4d:
            return "MOV   CL";
        case 0x4e:
            return "MOV   CM";
        case 0x4f:
            return "MOV   CA";
        case 0x50:
            return "MOV   DB";
        case 0x51:
            return "MOV   DC";
        case 0x52:
            return "MOV   DD";
        case 0x53:
            return "MOV   DE";
        case 0x54:
            return "MOV   DH";
        case 0x55:
            return "MOV   DL";
        case 0x56:
            return "MOV   DM";
        case 0x57:
            return "MOV   DA";
        case 0x58:
            return "MOV   EB";
        case 0x59:
            return "MOV   EC";
        case 0x5a:
            return "MOV   ED";
        case 0x5b:
            return "MOV   EE";
        case 0x5c:
            return "MOV   EH";
        case 0x5d:
            return "MOV   EL";
        case 0x5e:
            return "MOV   EM";
        case 0x5f:
            return "MOV   EA";
        case 0x60:
            return "MOV   HB";
        case 0x61:
            return "MOV   HC";
        case 0x62:
            return "MOV   HD";
        case 0x63:
            return "MOV   HE";
        case 0x64:
            return "MOV   HH";
        case 0x65:
            return "MOV   HL";
        case 0x66:
            return "MOV   HM";
        case 0x67:
            return "MOV   HA";
        case 0x68:
            return "MOV   LB";
        case 0x69:
            return "MOV   LC";
        case 0x6a:
            return "MOV   LD";
        case 0x6b:
            return "MOV   LE";
        case 0x6c:
            return "MOV   LH";
        case 0x6d:
            return "MOV   LL";
        case 0x6e:
            return "MOV   LM";
        case 0x6f:
            return "MOV   LA";
        case 0x70:
            return "MOV   MB";
        case 0x71:
            return "MOV   MC";
        case 0x72:
            return "MOV   MD";
        case 0x73:
            return "MOV   ME";
        case 0x74:
            return "MOV   MH";
        case 0x75:
            return "MOV   ML";
        case 0x76:
            return "HLT";
        case 0x77:
            return "MOV   MA";
        case 0x78:
            return "MOV   AB";
        case 0x79:
            return "MOV   AC";
        case 0x7a:
            return "MOV   AD";
        case 0x7b:
            return "MOV   AE";
        case 0x7c:
            return "MOV   AH";
        case 0x7d:
            return "MOV   AL";
        case 0x7e:
            return "MOV   AM";
        case 0x7f:
            return "MOV   AA";
        case 0x80:
            return "ADD   B";
        case 0x81:
            return "ADD   C";
        case 0x82:
            return "ADD   D";
        case 0x83:
            return "ADD   E";
        case 0x84:
            return "ADD   H";
        case 0x85:
            return "ADD   L";
        case 0x86:
            return "ADD   M";
        case 0x87:
            return "ADD   A";
        case 0x88:
            return "ADC   B";
        case 0x89:
            return "ADC   C";
        case 0x8a:
            return "ADC   D";
        case 0x8b:
            return "ADC   E";
        case 0x8c:
            return "ADC   H";
        case 0x8d:
            return "ADC   L";
        case 0x8e:
            return "ADC   M";
        case 0x8f:
            return "ADC   A";
        case 0x90:
            return "SUB   B";
        case 0x91:
            return "SUB   C";
        case 0x92:
            return "SUB   D";
        case 0x93:
            return "SUB   E";
        case 0x94:
            return "SUB   H";
        case 0x95:
            return "SUB   L";
        case 0x96:
            return "SUB   M";
        case 0x97:
            return "SUB   A";
        case 0x98:
            return "SBB   B";
        case 0x99:
            return "SBB   C";
        case 0x9a:
            return "SBB   D";
        case 0x9b:
            return "SBB   E";
        case 0x9c:
            return "SBB   H";
        case 0x9d:
            return "SBB   L";
        case 0x9e:
            return "SBB   M";
        case 0x9f:
            return "SBB   A";
        case 0xa0:
            return "ANA   B";
        case 0xa1:
            return "ANA   C";
        case 0xa2:
            return "ANA   D";
        case 0xa3:
            return "ANA   E";
        case 0xa4:
            return "ANA   H";
        case 0xa5:
            return "ANA   L";
        case 0xa6:
            return "ANA   M";
        case 0xa7:
            return "ANA   A";
        case 0xa8:
            return "XRA   B";
        case 0xa9:
            return "XRA   C";
        case 0xaa:
            return "XRA   D";
        case 0xab:
            return "XRA   E";
        case 0xac:
            return "XRA   H";
        case 0xad:
            return "XRA   L";
        case 0xae:
            return "XRA   M";
        case 0xaf:
            return "XRA   A";
        case 0xb0:
            return "ORA   B";
        case 0xb1:
            return "ORA   C";
        case 0xb2:
            return "ORA   D";
        case 0xb3:
            return "ORA   E";
        case 0xb4:
            return "ORA   H";
        case 0xb5:
            return "ORA   L";
        case 0xb6:
            return "ORA   M";
        case 0xb7:
            return "ORA   A";
        case 0xb8:
            return "CMP   B";
        case 0xb9:
            return "CMP   C";
        case 0xba:
            return "CMP   D";
        case 0xbb:
            return "CMP   E";
        case 0xbc:
            return "CMP   H";
        case 0xbd:
            return "CMP   L";
        case 0xbe:
            return "CMP   M";
        case 0xbf:
            return "CMP   A";
        case 0xc0:
            return "RNZ";
        case 0xc1:
            return "POP   B";
        case 0xc2:
            return "JNZ      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xc3:
            return "JMP      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xc4:
            return "CNZ      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xc5:
            return "PUSH  B";
        case 0xc6:
            return "ADI   D  (" + std::string(1, op[1]) + ")";
        case 0xc7:
            return "RST   0";
        case 0xc8:
            return "RZ";
        case 0xc9:
            return "RET";
        case 0xca:
            return "JZ       (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xcb:
            return "NOP";
        case 0xcc:
            return "CZ       (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xcd:
            return "CALL     (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xce:
            return "ACI   D8 (" + std::string(1, op[1]) + ")";
        case 0xcf:
            return "RST";
        case 0xd0:
            return "RNC";
        case 0xd1:
            return "POP   D";
        case 0xd2:
            return "JNC      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xd3:
            return "OUT   D8 (" + std::string(1, op[1]) + ")";
        case 0xd4:
            return "CNC      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xd5:
            return "PUSH  D";
        case 0xd6:
            return "SUI   D8 (" + std::string(1, op[1]) + ")";
        case 0xd7:
            return "RST   2";
        case 0xd8:
            return "RC";
        case 0xd9:
            return "NOP";
        case 0xda:
            return "JC       (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xdb:
            return "IN    D8";
        case 0xdc:
            return "CC       (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xdd:
            return "NOP";
        case 0xde:
            return "SBI   D8 (" + std::string(1, op[1]) + ")";
        case 0xdf:
            return "RST   3";
        case 0xe0:
            return "RPO";
        case 0xe1:
            return "POP   H";
        case 0xe2:
            return "JPO        (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xe3:
            return "XTHL";
        case 0xe4:
            return "CPO        (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xe5:
            return "PUSH  H";
        case 0xe6:
            return "ANI   D8 (" + std::string(1, op[1]) + ")";
        case 0xe7:
            return "RST   4";
        case 0xe8:
            return "RPE";
        case 0xe9:
            return "PCHL";
        case 0xea:
            return "JPE      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xeb:
            return "XCHG";
        case 0xec:
            return "CPE      (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xed:
            return "NOP";
        case 0xee:
            return "XRI    D8 (" + std::string(1, op[1]) + ")";
        case 0xef:
            return "RST    5";
        case 0xf0:
            return "RP	   1";
        case 0xf1:
            return "POP    PSW";
        case 0xf2:
            return "JP         (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xf3:
            return "DI";
        case 0xf4:
            return "CP         (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xf5:
            return "PUSH    PSW";
        case 0xf6:
            return "ORI     D8 (" + std::string(1, op[1]) + ")";
        case 0xf7:
            return "RST      6";
        case 0xf8:
            return "RM";
        case 0xf9:
            return "SPHL";
        case 0xfa:
            return "JM         (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xfb:
            return "EI";
        case 0xfc:
            return "CM         (" + std::string(1, op[2]) + std::string(1, op[1]) + ")";
        case 0xfd:
            return "NOP";
        case 0xfe:
            return "CPI     D8 (" + std::string(1, op[1]) + ")";
        case 0xff:
            return "RST     7";
        }

        throw std::runtime_error("Byte did not match any pattern");
    }

    int Disassembler::getOpSize() const
    {
        return prevOpSize;
    }
}