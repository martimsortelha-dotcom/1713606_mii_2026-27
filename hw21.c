#include <stdio.h>
int main()
{
    int x=3;
    int z=3;
    int y,w;
    y=x++;
    w=++z;
    printf("x=%d,y=%d,z=%d",x,y,z,w);

    return 0;
}
