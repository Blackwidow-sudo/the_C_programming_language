#include <stdio.h>
/*
// copy input to output; 1st version
int main(void)
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    return 0;
}
*/
// copy input to output; 2nd version
int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
    
    return 0;
}