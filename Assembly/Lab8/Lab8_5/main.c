#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 23;
    int b = 4;
    int i = mod_s(a,b);
    printf("%d %% %d = %d \n",a,b,i);
    return 0;
}
