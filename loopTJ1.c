#include <stdio.h>
int main(){
int x , y , c;
printf("Input ages:");

c=0;
for(int i=0;i<7;i++){
  scanf("%d",&x);
  if(x>13 && x <19){
    c++;
  }
}
printf("%d",c);


return 0 ;
}
