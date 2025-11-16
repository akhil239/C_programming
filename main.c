#include <stdio.h>
#include <stdlib.h>
/*function structure in c 
type_of_the_function name_of_the_function (parameters){
  body_of_the_function
} 
  if it returns int function type must should be int 
  if it returns none use type of the void means the this function returns nothing
  if it returns any other type it must match with the return type
  to store returned value varble must same as return and funtion type 
*/
int main(){
  struct point{
    int x;
    int y;
  };

  struct point Point;
  Point.x = 5;
  printf("%d",Point.x);
  return 0;
};


