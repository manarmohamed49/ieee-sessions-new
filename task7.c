#include <unistd.h>
int _putchar(char c)
{
return write(1 ,&c ,1);
}
int main (void)
{
int i , j ,k ;
for (i=0 ; i <=7 ; i++)
{
for (j=i+1 ; j<=8 ;j++)
{
for (k =j+1 ; k <=9 ; k++)
{
_putchar(i+'0');
_putchar(j+'0');
_putchar(k+'0');
if (!(i == 7 && j == 8 && k == 9))
{
 _putchar(',');
 _putchar(' ');
}
}
}
}
 _putchar('\n');
return 0;
}

