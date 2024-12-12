//Reverse the bits

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xFA3B1090;
    uint32_t temp = 0;
    uint32_t res = 0;
    printf("Before reversing: 0x%X\n", num);
    for (int i=0, j=28; i<32; i+=4, j-=4)
    {
        temp = ((num >> i) & 0x0F);
        res |= (temp << j);
    }
    printf("Reversed nibbles: 0x%X\n", res);
    return 0;
}

/*
//Reverse the bits

#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xFFFFFFF1;
    uint32_t temp = 0;
    uint32_t res = 0;
    printf("Before reversing: 0x%X\n", num);
    for (int i=0; i<32; i+=4)
    {
        temp = ((num >> i) & 0x0F);
        res |= (temp << (28-i));
    }
    printf("Reversed nibbles: 0x%X\n", res);
    return 0;
}
*/

/*
num = 0x12345678
res = 0x78563412

num << 24 = 0x78000000
temp = 0x78000000

temp2 = (num >> 8)&0xFF = 0x00123456 & 0xFF = 0X00000056
temp2<<4 = 00560000

temp|temp2 = 0x78560000

*/


/*
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t num = 0xFFFFFFF1;  // Example input
    uint32_t temp = 0;          // To store the reversed result
    uint32_t temp2 = 0;         // Temporary variable for each byte
    int j = 24;                 // Start from 24 (most significant byte position)

    printf("Before reversing: 0x%X\n", num);

    // Extract and shift each byte to its reversed position
    for (int i = 0; i < 32; i += 8) {
        temp2 = ((num >> i) & 0xFF);  // Extract the byte
        temp |= (temp2 << j);          // Shift the byte to the reversed position and accumulate in temp
        j -= 8;                        // Decrement j to move to the next position
    }

    printf("Reversed bytes: 0x%X\n", temp);
    return 0;
}
*/