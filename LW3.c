#include <stdio.h>
int main(){
float x;
    printf("Enter the age: ");
    scanf("%f",&x);

if(x >= 13 && x <= 19 ){
        printf("He/She is a teenager");
    }
else{printf("He/She is not a teenager");}
return 0;
}
