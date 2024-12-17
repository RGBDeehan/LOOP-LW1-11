/* Write a C program which can input some persons’ ages and display the number of people in each category. There are three categories – Child (Up to 12 years), Teenager (13-19 Years) and senior citizen (65 and 65+) Sample Input 7 12 19 24 11 17 13 65 Sample Output Child:2 Teenager: 3 Senior Citizen: 1 */

#include <stdio.h>
int main(){
int x , y , c, d , e ;
printf("Input ages:");

c=0;
d=0;
e=0;

for(int i=0;i<7;i++){
  scanf("%d",&x);
  if(x>0 && x <13){
    c++;
  }
  else if(x > 12 && x < 20){
    d++;
  }
  else if( x >= 65){
    e++;

  }
}
printf("Child: %d\n",c);
printf("Teenager: %d\n",d);
printf("Senior Citezen: %d\n",e);
return 0 ;
}
