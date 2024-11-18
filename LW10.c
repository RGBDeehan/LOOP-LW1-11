#include <stdio.h>
int main(){
float x,y,z ;
    printf("Enter the 1st angle of trianfle:");
    scanf("%f",&x);

    printf("Enter the 2nd angle of trianfle:");
    scanf("%f",&y);

    printf("Enter the 3rd angle of trianfle:");
    scanf("%f",&z);


 if ( x+y+z == 180){
    printf("The triangle is valid");
 }

 else {
    printf("The triangle is invalid");
 }
 return 0;
 }
