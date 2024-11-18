#include <stdio.h>
int main () {
float x , y ;
    printf("Enter your annual income:");
    scanf("%f",&x);

if( x <= 150000) {
    y = 0;
}
else if ( x > 150000 && x <= 300000 ){
    y = (x-150000) * 0.1;
}
else if ( x > 300000 && x <= 500000) {
    y = (x-300000) * 0.2 + (150000*0.1);
}
else {
    y = (x-500000) * 0.3 + (200000*0.2)+ (150000*0.1);
}

printf("Your income tax is : %.2f\n",y);

    return 0;
}
