#include <stdio.h>
#include <stdlib.h>

/*a C program to display the first n odd natural numbers and their sum using for, while and
do-while loop*/
    //for loop
int main(){
int n,sum=0;
printf("enter a number:");
scanf("%d",&n);
for(int i=0;i<=n;i++){
if (i%2!=0){
        printf("odd numbers:%d\n",i);
        sum+=i;
}
}
        printf("sum of odd numbers:%d\n",sum);
    return 0;

}
    //while loop
int main(){
int n,sum=0;
printf("enter a number:");
scanf("%d",&n);

int i=0;

while(i<=n){
        if(i%2!=0){
        printf("odd numbers:%d\n",i);
        sum+=i;
        }
        i++;
}
printf("sum of odd numbers:%d\n",sum);
       return 0;
}
       //do while loop
int main(){
int n,sum=0;
printf("enter a number:");
scanf("%d",&n);

int i=0;
do{
    if(i%2!=0){
    printf("odd numbers:%d\n",i);
    sum+=i;
    }
    i++;
}while(i<=n);


printf("sum of odd numbers:%d\n",sum);
       return 0;
}
