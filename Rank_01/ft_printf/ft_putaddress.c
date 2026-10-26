#include "ft_printf.h"

int ft_putaddress(void *ptr)
{
    unsigned long long address;
    char *prfx;
    size_t count;

    count = 0;
    prfx = "0x";
    address = (unsigned long long)ptr;
    
}