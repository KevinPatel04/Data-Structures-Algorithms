#include<stdio.h>
struct NODE{
    int id;
    struct NODE * next;
};
struct NODE *head=NULL;

void insert(int val){
    struct NODE *ptr=(struct NODE*)malloc(sizeof(struct NODE));
    ptr->next=NULL;
    ptr->id=val;
    printf("Roll no:: %d arrived.\n",ptr->id);
    if(head==NULL){
        head=ptr;
    }else{
        struct NODE *temp=head;
        struct NODE *prev;
       while(temp->next!=NULL){
            prev=temp;
            prev=prev->next;
            if(prev->id<val)
                temp=temp->next;
            else
                break;
            //printf("%d",temp->id);
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }
}

void display(){
    struct NODE *temp;
    if(head==NULL){
        printf("List is Empty!!");
        return;
    }else{
        temp=head;
        printf("Link list :: ->> [");
        while(temp->next!=NULL){
            printf(" %d",temp->id);
            temp=temp->next;
        }
        printf(" %d",temp->id);
        printf(" ]\n\n");
    }

}

void main(){

    insert(1);
    display();
    insert(2);
    display();
    insert(4);
    display();
    insert(5);
    display();
    insert(6);
    display();
    insert(7);
    display();
    insert(9);
    display();
    insert(10);
    display();
    insert(3);
    display();
}

