#include <unistd.h>
int _putchar(char c)
{
return write(1 , &c ,1);
}
int main (void)
{ 
int i ,j;
for (i=0;i<=8 ; i++)
{
for ( j=i+1;j <=9 ; j++)
{
_putchar(i+'0');
_putchar(j+'0');
 if (!(i == 8 && j == 9))
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

_putchar('\n');

    return 0;
}
