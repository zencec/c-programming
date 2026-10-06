#include<stdio.h>
void main(){
int i,n,key,f=0;
printf("Enter the limit:");
scanf("%d",&n);
int a[n];
printf("Enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("Enter the element to be be searched :\t");
scanf("%d",&key);

for(i=0;i<n;i++){
if(a[i]==key){
printf("Element %d found at position %d",key,i+1);
f=1;
}
}
if(f==0)
{
printf("The number %d is not found in the array",key);
}

}
