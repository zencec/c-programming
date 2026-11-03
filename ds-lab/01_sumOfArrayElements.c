#include<stdio.h>
void main(){
int a[10],i,n,sum=0;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++){

scanf("%d",&a[i]);
}
printf("the Array is :\n");
for(i=0;i<n;i++){
sum += a[i];
printf("%d \t",a[i]);
}
printf("\n");
printf("The sum of the elements of the array is :%d",sum);
}
