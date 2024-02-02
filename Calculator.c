#include<stdio.h> 
#include<math.h> 
#include<string.h> 
float add(float j); 
float subtract(); 
float multiply(); 
float divide(); 
int main(){ 
    float box; 
    char operat = '+'; 
    char exitcontrol= 'c'; 
   do 
   { 
     printf("enter the first no for peration"); 
    scanf("%f",& box); 
    printf("enter operator"); 
    scanf(" %c", &operat); 
    if (operat == '+') 
    { 
       box = add(box);
       
    } 
     
   } while (exitcontrol == 'c' ); 
   return 0; 
} 
float add(float j){ 
    float k,sum; 
    printf("enter the no you want to add"); 
    scanf("%f",&k); 
    sum=j+k; 
    return sum; 
}
