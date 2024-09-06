#include "buff_clr.h"
#include <stdio.h>

void buff_clr(void)
{
    char junk;
    do
    {
        junk = getchar();
        junk = getchar();
    } while(junk != '\n');
}
