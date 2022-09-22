#include "state.hpp"

namespace em
{
    State::State(uint8_t *memory) : memory(memory) {}
    void State::process(const std::vector<unsigned char> &op, int opCount)
    {
        switch (op[0])
        {
        case 0x00:
            return;
        case 0x01:
            return;
        case 0x02:
            return;
        case 0x03:
            return;
        case 0x04:
            return;
        case 0x05:
            return;
        case 0x06:
            return;
        case 0x07:
            return;
        case 0x08:
            return;
        case 0x09:
            return;
        case 0x0a:
            return;
        case 0x0b:
            return;
        case 0x0c:
            return;
        case 0x0d:
            return;
        case 0x0e:
            return;
        case 0x0f:
            return;
        case 0x10:
            return;
        case 0x11:
            return;
        case 0x12:
            return;
        case 0x13:
            return;
        case 0x14:
            return;
        case 0x15:
            return;
        case 0x16:
            return;
        case 0x17:
            return;
        case 0x18:
            return;
        case 0x19:
            return;
        case 0x1a:
            return;
        case 0x1b:
            return;
        case 0x1c:
            return;
        case 0x1d:
            return;
        case 0x1e:
            return;
        case 0x1f:
            return;
        case 0x20:
            return;
        case 0x21:
            return;
        case 0x22:
            return;
        case 0x23:
            return;
        case 0x24:
            return;
        case 0x25:
            return;
        case 0x26:
            return;
        case 0x27:
            return;
        case 0x28:
            return;
        case 0x29:
            return;
        case 0x2a:
            return;
        case 0x2b:
            return;
        case 0x2c:
            return;
        case 0x2d:
            return;
        case 0x2e:
            return;
        case 0x2f:
            return;
        case 0x30:
            return;
        case 0x31:
            return;
        case 0x32:
            return;
        case 0x33:
            return;
        case 0x34:
            return;
        case 0x35:
            return;
        case 0x36:
            return;
        case 0x37:
            return;
        case 0x38:
            return;
        case 0x39:
            return;
        case 0x3a:
            return;
        case 0x3b:
            return;
        case 0x3c:
            return;
        case 0x3d:
            return;
        case 0x3e:
            return;
        case 0x3f:
            return;
        case 0x40:
            return;
        case 0x41:
            return;
        case 0x42:
            return;
        case 0x43:
            return;
        case 0x44:
            return;
        case 0x45:
            return;
        case 0x46:
            return;
        case 0x47:
            return;
        case 0x48:
            return;
        case 0x49:
            return;
        case 0x4a:
            return;
        case 0x4b:
            return;
        case 0x4c:
            return;
        case 0x4d:
            return;
        case 0x4e:
            return;
        case 0x4f:
            return;
        case 0x50:
            return;
        case 0x51:
            return;
        case 0x52:
            return;
        case 0x53:
            return;
        case 0x54:
            return;
        case 0x55:
            return;
        case 0x56:
            return;
        case 0x57:
            return;
        case 0x58:
            return;
        case 0x59:
            return;
        case 0x5a:
            return;
        case 0x5b:
            return;
        case 0x5c:
            return;
        case 0x5d:
            return;
        case 0x5e:
            return;
        case 0x5f:
            return;
        case 0x60:
            return;
        case 0x61:
            return;
        case 0x62:
            return;
        case 0x63:
            return;
        case 0x64:
            return;
        case 0x65:
            return;
        case 0x66:
            return;
        case 0x67:
            return;
        case 0x68:
            return;
        case 0x69:
            return;
        case 0x6a:
            return;
        case 0x6b:
            return;
        case 0x6c:
            return;
        case 0x6d:
            return;
        case 0x6e:
            return;
        case 0x6f:
            return;
        case 0x70:
            return;
        case 0x71:
            return;
        case 0x72:
            return;
        case 0x73:
            return;
        case 0x74:
            return;
        case 0x75:
            return;
        case 0x76:
            return;
        case 0x77:
            return;
        case 0x78:
            return;
        case 0x79:
            return;
        case 0x7a:
            return;
        case 0x7b:
            return;
        case 0x7c:
            return;
        case 0x7d:
            return;
        case 0x7e:
            return;
        case 0x7f:
            return;
        case 0x80:
            return;
        case 0x81:
            return;
        case 0x82:
            return;
        case 0x83:
            return;
        case 0x84:
            return;
        case 0x85:
            return;
        case 0x86:
            return;
        case 0x87:
            return;
        case 0x88:
            return;
        case 0x89:
            return;
        case 0x8a:
            return;
        case 0x8b:
            return;
        case 0x8c:
            return;
        case 0x8d:
            return;
        case 0x8e:
            return;
        case 0x8f:
            return;
        case 0x90:
            return;
        case 0x91:
            return;
        case 0x92:
            return;
        case 0x93:
            return;
        case 0x94:
            return;
        case 0x95:
            return;
        case 0x96:
            return;
        case 0x97:
            return;
        case 0x98:
            return;
        case 0x99:
            return;
        case 0x9a:
            return;
        case 0x9b:
            return;
        case 0x9c:
            return;
        case 0x9d:
            return;
        case 0x9e:
            return;
        case 0x9f:
            return;
        case 0xa0:
            return;
        case 0xa1:
            return;
        case 0xa2:
            return;
        case 0xa3:
            return;
        case 0xa4:
            return;
        case 0xa5:
            return;
        case 0xa6:
            return;
        case 0xa7:
            return;
        case 0xa8:
            return;
        case 0xa9:
            return;
        case 0xaa:
            return;
        case 0xab:
            return;
        case 0xac:
            return;
        case 0xad:
            return;
        case 0xae:
            return;
        case 0xaf:
            return;
        case 0xb0:
            return;
        case 0xb1:
            return;
        case 0xb2:
            return;
        case 0xb3:
            return;
        case 0xb4:
            return;
        case 0xb5:
            return;
        case 0xb6:
            return;
        case 0xb7:
            return;
        case 0xb8:
            return;
        case 0xb9:
            return;
        case 0xba:
            return;
        case 0xbb:
            return;
        case 0xbc:
            return;
        case 0xbd:
            return;
        case 0xbe:
            return;
        case 0xbf:
            return;
        case 0xc0:
            return;
        case 0xc1:
            return;
        case 0xc2:
            return;
        case 0xc3:
            return;
        case 0xc4:
            return;
        case 0xc5:
            return;
        case 0xc6:
            return;
        case 0xc7:
            return;
        case 0xc8:
            return;
        case 0xc9:
            return;
        case 0xca:
            return;
        case 0xcb:
            return;
        case 0xcc:
            return;
        case 0xcd:
            return;
        case 0xce:
            return;
        case 0xcf:
            return;
        case 0xd0:
            return;
        case 0xd1:
            return;
        case 0xd2:
            return;
        case 0xd3:
            return;
        case 0xd4:
            return;
        case 0xd5:
            return;
        case 0xd6:
            return;
        case 0xd7:
            return;
        case 0xd8:
            return;
        case 0xd9:
            return;
        case 0xda:
            return;
        case 0xdb:
            return;
        case 0xdc:
            return;
        case 0xdd:
            return;
        case 0xde:
            return;
        case 0xdf:
            return;
        case 0xe0:
            return;
        case 0xe1:
            return;
        case 0xe2:
            return;
        case 0xe3:
            return;
        case 0xe4:
            return;
        case 0xe5:
            return;
        case 0xe6:
            return;
        case 0xe7:
            return;
        case 0xe8:
            return;
        case 0xe9:
            return;
        case 0xea:
            return;
        case 0xeb:
            return;
        case 0xec:
            return;
        case 0xed:
            return;
        case 0xee:
            return;
        case 0xef:
            return;
        case 0xf0:
            return;
        case 0xf1:
            return;
        case 0xf2:
            return;
        case 0xf3:
            return;
        case 0xf4:
            return;
        case 0xf5:
            return;
        case 0xf6:
            return;
        case 0xf7:
            return;
        case 0xf8:
            return;
        case 0xf9:
            return;
        case 0xfa:
            return;
        case 0xfb:
            return;
        case 0xfc:
            return;
        case 0xfd:
            return;
        case 0xfe:
            return;
        case 0xff:
            return;
        }

        throw std::runtime_error("Byte did not match any pattern");
    }

}
