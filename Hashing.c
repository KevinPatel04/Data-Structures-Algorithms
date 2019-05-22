#include<stdio.h>
#include<math.h>
long arr[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
void insert(){
    int i,c=1,collision=0;
    long a = 100000 + (rand() % 900000);
    printf("Data :: %ld\n",a);
    while(c==1){
        i=hash(a + collision);
        if(arr[i]!=0){
            collision++;
            printf("collision @ %d -> ",i);
        }else{
            arr[i]=a;
            break;
        }
    }
    if(collision>0){
        printf("\n");
    }
    printf("%d Inserted @ %d\n\n",a,i);
}

int hash(long val){
    return (val % 18)+2;
}

void display(){
    printf("\nHashed Array is :: \n");
    printf("|");
    for(int i=0;i<20*9-1;i++){
        printf("=");
    }printf("|\n");
    for(int i=0;i<20;i++){
        if(i<10){
            printf("|   0%d   ",i);
        }else{
            printf("|   %d   ",i);
        }
    }
    printf("|\n|");
    for(int i=0;i<20*9-1;i++){
        printf("=");
    }printf("|\n");
    for(int i=0;i<20;i++){
        if(arr[i]==0){
            printf("| ------ ");
        }else{
            printf("| %ld ",arr[i]);
        }
    }
    printf("|\n|");
    for(int i=0;i<20*9-1;i++){
        printf("=");
    }printf("|\n");
}

int main(){
    for(int i=0;i<15;i++)
        insert();
    display();
}
