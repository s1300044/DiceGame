# DiceGame
include<stdio.h>
include<stdlib.h>
int main(){
int sum=0;
printf("Rolling dice...\n");
for(int i=1;i<3;i++){
int n;
n=rand()%6+1;
printf("Die %d:%d\n",i,n);
sum+=n;
}
printf("Total value:%d\n",sum);
}
