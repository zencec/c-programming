#include<stdio.h>
void main(){
int arr_1[10],arr_2[10],c[10],m,n,i,j,k;
printf("Enter the Number of elements of first array:");
scanf("%d",&n);
printf("Enter the elements of first array:");
for(i=0;i<n;i++){

scanf("%d",&arr_1[i]);
}
printf("Enter the Number of elements of  Second array:");
scanf("%d",&m);
printf("Enter the elements of Second array:");
for(j=0;j<m;j++){
scanf("%d",&arr_2[j]);
}
i=j=k=0;
while(i<n && j<m){
if(arr_1[i]<arr_2[j]){
c[k]=arr_1[i];
i++;

}
else{
c[k]=arr_2[j];
j++;
}
k++;
}
while(i<n){
c[k]=arr_1[i];
i++;
k++;
}
while(j<m){
c[k++]=arr_2[j];
j++;
k++;
}

printf("The Sorted Array is :");
for( i=0;i<m+n;i++){
printf("%d \t",c[i]);
}
}
