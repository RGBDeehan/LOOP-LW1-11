/* Write a C program which can input some persons’ ages and display how many of them are teenagers. Sample Input 7 12 19 24 11 17 13 65 Sample Output Teenage: 3 */

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
