#include<stdio.h>
void main(){
int mark;
printf("Enter Your Mark");
scanf("%d",&mark);
if(mark>=90){
printf("You Got A+ Grade");
}
else if(mark>=80){
printf("You Got B+ Grade");
}
else if(mark>=70){
printf("You Got C+ Grade");
}
else if(mark>=50 && mark<70){
printf("You Got D+ Grade");
}
else{
printf("You Failed");
}
}
