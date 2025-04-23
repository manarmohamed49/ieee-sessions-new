#include <stdio.h>
int main (){
char c;
printf("enter the character:");
scanf("%c" , &c);

if ( c >= 'A' && c <= 'Z'){
printf("num is upper\n");
}
else if ( c >= 'a' && c <='z'){
printf("num is lower\n");
}
else{
printf("num is not a letter\n");
}
return 0;
}
