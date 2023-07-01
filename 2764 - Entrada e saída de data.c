#include <stdio.h>

int main(void) 
{
    
    char v[9];
    scanf(" %s", v);

    printf("%c%c%c%c%c%c%c%c\n", v[3], v[4], v[2], v[0], v[1], v[5], v[6], v[7]);
    printf("%c%c%c%c%c%c%c%c\n", v[6], v[7], v[2], v[3], v[4], v[5], v[0], v[1]);
    printf("%c%c-%c%c-%c%c\n", v[0], v[1], v[3], v[4], v[6], v[7]);

return 0;


}
