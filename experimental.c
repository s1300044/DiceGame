#include<stdio.h>
#include<stdlib.h>
int main(){
  int sum=0;
  char name=[10];
  printf("What is your name?\n");
  scanf("%s",&name);
  printf("Hello,%s!\nRolling the dice...\n",name);
  for(int i=1;i<3;i++){
    int n;
    n=rand()%6+1;
    printf("Dice %d:%d\n",i,n);
    sum+=n;
  }
  printf("Total value:%d\n",sum);
  if(sum>7) printf("%s won!\n",name);
  else printf("%s lost\n",name);
}
