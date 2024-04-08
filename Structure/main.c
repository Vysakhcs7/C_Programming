#include <stdio.h>
#include <stdint.h>

//#define GPIOA 0x40020000

struct GPIO
{
    uint32_t MODER;
    uint32_t OTYPER;
    uint32_t OSPEEDER;
    uint32_t PUPDR;
    uint32_t IDR;
    uint32_t ODR;
    uint32_t BSRR;
    uint32_t LCKR;
    uint32_t AFRL;
    uint32_t AFRH;
};

int main(void)
{
    struct GPIO oGPIO;
    printf("%p\n",oGPIO);
    printf("%p\n",oGPIO.MODER);
    printf("%p\n",oGPIO.OTYPER);
       printf("%p\n",oGPIO.OSPEEDER);
    return 0;
}
