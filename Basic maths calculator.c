#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char ch;
    ch='c';
    char a;
    float box=0;
    float n;
    char operation[10];
    while(ch=='c'){
        printf("what action do you want to perform \n please type any of the following to perform task\n ");
        printf("ADD\nSUBTRACT\nMULTIPLY\nDIVIDE\n");
        scanf("%s",&operation);
        if (strcmp(operation,"ADD")==0){
            a = '+';
            printf("enter the first no");
            do
            {
            scanf("%f",&n);
            box=box+n;
            printf("if you want to add more no inout + else =");
            scanf(" %c", &a);
            }while(a == '+SU');
            printf("the total sum is %f ",box);
        }
        scanf("%s",&ch);
    }
    return 0;
}