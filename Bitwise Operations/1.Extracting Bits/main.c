#include <stdio.h>
#include<stdint.h>
int main(void)
{
    uint16_t temp, REGHL_16 = 0b1000000110101011;
    uint8_t REGH_8, REGL_8;
    REGH_8 = (REGHL_16 & 0xFF00) >> 8;
    REGL_8 = REGHL_16 & 0x00FF;
    printf("%X\n",REGHL_16);
    printf("%X\n",REGH_8);
    printf("%X\n",REGL_8);
    return 0;
}