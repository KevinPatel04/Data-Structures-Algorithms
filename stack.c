#include<stdio.h>

int max=5,min=0,stack[5],top=-1;
int main(){
    int i=1,m,j,n;
    while(i!=0){
        printf("Enter Your Choice: \n(1)POP (2)PEEP (3)PUSH (4)CHANGE (5)VIEW STACK (0)EXIT : ");
        scanf("%d",&i);
        switch(i){
    case 0:
        break;
    case 1:
        printf("POP:: %d\n",pop(stack));
        break;
    case 2:
        printf("\nEnter index from top: ");
        scanf("%d",&m);
        printf("PEEP:: %d\n",peep(stack,m));
        break;
    case 3:
        printf("\nEnter Number: ");
        scanf("%d",&n);
        printf("PUSH:: %d\n",n);
        push(stack,n);
        break;
    case 4:
        printf("\nEnter Number: ");
        scanf("%d",&n);
        printf("\nEnter index from top: ");
        scanf("%d",&m);
        printf("CHANGE:: %d @ %d\n",n,i);
        change(stack,n,i);
    case 5:

        printf("\nStack is:\n[");

        for(j=0;j<5;j++){
            printf("%d ",stack[j]);
        }
        printf("]\n");
        }

    }

}

void change(int stack[],int val, int i){
    if(top-i+1<min){
        printf("Stack Underflow!!\n");
    }else{
        stack[top-i+1]=val;
    }
}

void push(int stack[],int val){
    if(top<max){
        top=top+1;
        stack[top]=val;
    }else{
        printf("Stack Overflow!!\n");
    }
}

int pop(int stack[]){
    if(top<min){
        printf("Stack underflow!!\n");
    }else{
        top=top-1;
        return stack[top+1];
    }
}

int peep(int stack[],int i){
    if((top-i+1)<min){
        printf("Stack underflow!!\n");
    }else{
        return stack[top-i+1];
    }
}
