#include<stdio.h>
#include<stdlib.h>
#define MAX 70
int main(){
     int stack[MAX],element,choice,top,i=0;
     top=-1;
    do{
        printf("Implementation of stack using Arrays. \n");
        printf("1.Push\n");
        printf("2.Pull\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice 1..4 :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
               if(top==MAX-1){
                  printf("STACK OVERFLOW\n");
                }else{ 
                  top++;
                printf("Enter Element to push.");
                scanf("%d",&element);
                stack[top]=element;
                }
                break;
            case 2:
                if(top==-1)
                   printf("STACK UNDERFLOW\n");
                else{
                    element=stack[top];
                    printf("Element Popped = %d",&element);
                    top--;
                }
                break;
            case 3:
                printf("THe Elements Of The Stack Are:\n");
                for(i=0;i<=top;i++)
                    printf("%d\t",stack[i]);
                break;
            case 4:
                exit;
                break;
            default:
                printf("Wrong choice \n");
        }
    }
    while(choice!=4);
}