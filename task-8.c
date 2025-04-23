#include <stdio.h>

void isEven(int n) {
 if (n % 2 == 0) {
  printf("%d is even\n", n);
 } else {
  printf("%d is odd", n);
 }
}

void calculateArea(float n) {
 if (n  == 0) {
  printf("no radius specified");
 } else {
  printf("the radius exists");
 }
}

int main() {
  int num ;
  printf("enter the num:") ;
  scanf("%d", &num) ;
  isEven(num) ;


  float radius ;
  printf("enter the radius:") ;
  scanf("%f", &radius) ;
  calculateArea( radius);
}
