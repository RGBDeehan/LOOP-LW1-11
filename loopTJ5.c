
#include <stdio.h>
int main(){
float x , y , c;
printf("Input CGPA:");

c=0;
for(int i=0;i<7;i++){
  scanf("%f",&x);
  if(x>3.5 ){
    c++;
  }
}
printf("%.0f",c);


return 0 ;
}
