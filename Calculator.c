#include<stdio.h> 
#include<math.h> 
#include<string.h> 
float add(float j); 
float subtract(float j); 
float multiply(); 
float divide(); 
int main(){ 
    float box; 
    char operat = '+'; 
    char exitcontrol= 'c'; 
    printf("welcome to calcuminia by anmol\n");
    printf("you can use operators like :\n = :to see result right now \n +:to add \n -:to subtract \n *:to multiply \n /:to devide \n");
    printf("enter the first no for operation"); 
    scanf("%f",& box);
    do{
    printf("enter operator"); 
    scanf(" %c", &operat); 
    if (operat == '+') 
    { 
       box = add(box);
       printf(" want to operate more enter c else to getresult and exit press x ");
       scanf(" %c",&exitcontrol);
    } 

     
   } while (exitcontrol == 'c' ); 
   printf("the final value is %f ",box);
   return 0; 
} 
float add(float j){ 
    float k,sum; 
    printf("enter the no you want to add"); 
    scanf("%f",&k); 
    sum=j+k; 
    return sum; 
}
float subtract(float j){ 
    float k,sub; 
    printf("enter the no you want to subtract"); 
    scanf("%f",&k); 
    sub=j-k; 
    return sub; 
}