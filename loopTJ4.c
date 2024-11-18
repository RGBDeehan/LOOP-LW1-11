

#include <stdio.h>
int main(){
int x , y , z, c;


c=0;


for(int i=0;i<3;i++){
    printf("Input area:");
  scanf("%d",&x);

     printf("Input population:");
  scanf("%d",&y);

 z= x/y;
  if(z > 500){
    c++;
  }
}
printf("%d",c);


return 0 ;
}
