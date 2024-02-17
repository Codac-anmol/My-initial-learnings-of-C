#include<stdio.h> 
#include<math.h> 
#include<string.h> 
float add(float j); 
float subtract(float j); 
float multiply(float j); 
float divide(float j);
int main(){ 
    float box; 
    char operat = '+'; 
    char exitcontrol= 'c'; 
    printf("welcome to calcuminia by anmol\n");
    printf("you can use operators like :\n = :to see result right now \n +:to add \n -:to subtract \n *:to multiply \n /:to devide \n x:to close program immediately \n ");
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
    
    if (operat == '-') 
    { 
       box = subtract(box);
       printf(" want to operate more enter c else to getresult and exit press x ");
       scanf(" %c",&exitcontrol);
    } 
    
     if (operat == '*') 
    { 
       box = multiply(box);
       printf(" want to operate more enter c else to getresult and exit press x ");
       scanf(" %c",&exitcontrol);
    }
     if (operat == '/') 
    { 
       box = divide(box);
       printf(" want to operate more enter c else to getresult and exit press x ");
       scanf(" %c",&exitcontrol);
    }
    if ( operat == '='){
        printf("your value right now is %f ",box);
        printf("please enter next operator to calculate or c to exit ");
        scanf("%c",&operat);
    }
    if ( operat == 'c'){
        exitcontrol=='x';
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
float multiply(float j){ 
    float k,sub; 
    printf("enter the no you want to multiply "); 
    scanf("%f",&k); 
    sub=j*k; 
    return sub; 
}
float divide(float j){ 
    float k,sub; 
    printf("enter the no you want to divide %f from ",j); 
    scanf("%f",&k);
    if(k==0){
        printf("any no divided by 0 is undefined please try again ");
        return j;
    }
    else{
        sub=j/k; 
        return sub; 
    }
}