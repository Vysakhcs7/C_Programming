/*
Binary to Decimal
*/

#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main()
{
    uint32_t num = 0b00110001;
    uint32_t temp = 0;
    uint32_t res = 0;
    int size = (8*sizeof(num));
    for(int i=(size-1); i>=0; i--)
    {
        temp = ( (num >> i) & 1);
        //res = res + (temp * (pow(2,i)));
        res += (temp << i); //n << i = n*(2^i) 
    }
    printf("Decimal represenatation: %d",res);
    return 0;
}
