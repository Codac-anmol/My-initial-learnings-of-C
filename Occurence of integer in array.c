//Write a c program to print the occurrence of duplicate no.in a given array of size 10 . 

#include<stdio.h>
int main(){
    int array1[10];
    int i,k;
    int count=0;
    int a;
    printf("input 10 no's for array ");
    for (i=0;i<10;i++){
        scanf("%d",&array1[i]);
    }
    printf("enter the no you want to check occurence of in given array");
    scanf("%d",&a);
    for(i=0;i<10;i++){
        if(array1[i]==a){
            count++;
        }
    }
    printf(" the occuren of %d is %d times",a,count);
}
 
