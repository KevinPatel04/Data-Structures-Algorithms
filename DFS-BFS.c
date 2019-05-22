#include <stdio.h>
#define MAX 5

int matrix[][5]={{0,0,0,1,0}
                ,{0,0,1,0,1}
                ,{0,1,0,1,1}
                ,{1,0,1,0,1}
                ,{0,1,1,1,0}};
void BFS(int a);
void insert(int a);
void delete();
void display_Matrix();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int visitedb[]={0,0,0,0,0};
int visitedd[]={0,0,0,0,0};
main()
{
    display_Matrix();
    printf("\n\t");
    printf("\n\tBFS::");
    BFS(1);
    printf("\n\tDFS::");
    DFS(1);
}

void BFS(int src){
    insert(src);
    visitedb[src-1]=1;
    printf(" -> %d",src);
    while(front!=-1){
        int v=Delete();
        for(int i=0;i<5;i++){
            if(matrix[v-1][i]!=0 && visitedb[i]==0){
                insert(i);
                visitedb[i]=1;
                printf(" -> %d",i+1);
            }
        }
    }
}

void DFS(int src){
    visitedd[src-1]=1;
    printf(" -> %d",src);
    for(int i=0;i<5;i++){
        if(matrix[src-1][i]!=0 && visitedd[i]==0){
            DFS(i+1);
        }
    }
}

void display_Matrix(){
    printf("\tAdjacency Matrix :: \n");
    printf("\t   |  1  2  3  4  5\n");
    printf("\t-------------------");
    for(int i=0;i<5;i++){
            printf("\n\t %d |",i+1);
        for(int j=0;j<5;j++){
            printf("  %d",matrix[i][j]);
        }
    }
}

void insert(int val)
{
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        rear = rear + 1;
        queue_array[rear] = val;
    }
}

int Delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        int v=queue_array[front];
        if(front==rear){
            front=rear=-1;
        }else
            front = front + 1;
        return v;
    }
}
