/* Write a C program which can input some day’s temperature and display the average temperature of those days when temperatures cross 30 0 . Sample Input 5 32 29 34 21 27 Sample Output Teenage: 33.00 */

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
