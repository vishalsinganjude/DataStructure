#include <stdio.h>
int main(void)
{
int x[100]; /* this declares a 100-integer array */
int t;
/* load x with values 0 through 99 */
for(t=0; t<100; ++t)
    x[t] = t;
/* display contents of x */
for(t=0; t<=100; ++t)
    printf("%d\n ", x[t]);
return 0;
}
