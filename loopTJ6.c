#include <stdio.h>
int main (){
float x , y , c ;
int q1=0, q2=0 , q3=0 , q4=0 , axis=0;
c=0;
for(int i=0;i<3;i++)
{

    printf("Enter the value of x:");
    scanf("%f",&x);

    printf("Enter the value of y:");
    scanf("%f",&y);

    if ( x > 0 && y > 0) {
        q1++;
    }
    else if( x < 0 && y > 0) {
        q2++;
    }
    else if ( x < 0 && y < 0) {
        q3++;
    }
    else if ( x > 0 && y < 0) {
       q4++;
    }
   else { axis++;}

   if(q1>=q2 && q1>=q3 && q1>=q4 ){
    printf("Most point in 1st");
   }
   else if(q2>=q1 && q2>=q3 && q2>=q4 ){
    printf("Most point in 2nd");
   }
   else if(q3>=q1 && q3>=q2 && q3>=q4 ){
    printf("Most point in 3rd");
   }
   else if(q4>=q1 && q4>=q3 && q4>=q2 ){
    printf("Most point in 24th");
   }
   else {
    printf("Most point in axis");
   }

}
return 0;
}
