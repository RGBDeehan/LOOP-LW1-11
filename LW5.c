
#include <stdio.h>
int main(){
float x,y,z,d;
    printf("Enter the 1st number: ");
    scanf("%f",&x);

    printf("Enter the 2nd number: ");
    scanf("%f",&y);

    printf("Enter the 3rd number: ");
    scanf("%f",&z);

   if (x>y && x>z){
   if(y<x && y<z){
    d = x -y;
   }
   else if(z<x && z<y){
    d = x -z;
   }
   }
if (z>y && z>x){
   if(y<x && y<z){
    d = z -y;
   }
   else if(x<z && x<y){
    d = z-x;
   }
   }

   if (y>x && y>z){
   if(x<y && x<z){
    d = y-x;
   }
   else if(z<x && z<y){
    d = y -z;
   }
   }
  printf("The difference is: %.2f\n",d);


return 0;
}
