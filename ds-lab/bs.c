#include<stdio.h>
void main(){
int a[10],temp,n;
printf("Enter the Number of elements of first array:");
scanf("%d",&n);
printf("Enter the elements of first array:");
for(int i=0;i<n;i++){

scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}

printf("\n sorted array:");
for(int i=0;i<n;i++){
printf("%d \t",a[i]);
}
}
