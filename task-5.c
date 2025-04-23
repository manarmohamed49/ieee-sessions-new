#include <stdio.h>
int my_isalpha(int c){
return(c >= 'a' && c <= 'z');
}
int main (){
char c;
printf("entar the char:");
scanf("%c", &c);
if(my_isalpha(c)){
printf("'%c' is lower\n" ,c);
}
else {
printf("'%c' is upper\n" ,c);
}
return 0;
}
