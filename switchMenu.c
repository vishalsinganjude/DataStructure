#include<stdio.h>
int main()
{
    int x,z;
    for(x=100; x != 65; x -= 5)
        {
            z = x*x;
            printf("The square of %d, %d\n", x, z);
        }
/*void menu(void)
{
char ch;
printf("1. Check Spelling\n");
printf("2. Correct Spelling Errors\n");
printf("3. Display Spelling Errors\n");
printf("Strike Any Other Key to Skip\n");
printf(" Enter your choice: ");
ch = getchar(); /* read the selection from the keyboard
while(1)
{
switch(ch) {
case 1:
check_spelling ();
break;
case 2:
correct_errors ();
break;
case 3:
display_errors ();
break;
default :
printf("No option selected");
}
}
}*/
}
