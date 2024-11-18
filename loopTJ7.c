

#include <stdio.h>
int main(){
int x , s, c,avg;
printf("Input temp:");
s=0;
c=0;
for(int i=0;i<5;i++){
  scanf("%d",&x);
  if(x>=30){

    s=s+x;
     c++;
  }
}


avg = s/c;
printf("Average: %d\n",avg);
return 0 ;
}
