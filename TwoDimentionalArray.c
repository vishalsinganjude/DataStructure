#include <stdio.h>
int main(void)
{
int t, i, num[6][7];
for(t=0; t<6; ++t)
    for(i=0; i<7; ++i)
    num[t][i] = (t*4)+i+1;
/* now print them out */
for(t=0; t<6; ++t)
{
    for(i=0; i<7; ++i)
        printf("%d ", num[t] [i]);
    printf("\n");
}
return 0;
}
