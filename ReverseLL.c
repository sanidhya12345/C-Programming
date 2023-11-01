#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *link;
}*start=NULL;
void insert_at_end(int key){
    struct Node *ptr,*ptr1;
    ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=key;
    ptr->link=NULL;
    if(start==NULL){
        start=ptr;
    }
    ptr1=start;
    while(ptr1->link!=NULL){
        ptr1=ptr1->link;
    }
    ptr1->link=ptr;
    ptr->link=NULL;
}
void printLL(){
    struct Node *ptr=start;
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
    printf("null");
}

void reversePrint(struct Node *ptr){
    if(ptr==NULL){
        return;
    }
    reversePrint(ptr->link);
    printf("%d ",ptr->data);
}
void reverseLL(struct Node *str){
    struct Node *prev,*ptr,*next;
    prev=NULL;
    ptr=str;
    next=str->link;
    while(next!=NULL){
        ptr->link=prev;
        prev=ptr;
        ptr=next;
        next=next->link;
    }
    ptr->link=prev;
    start=ptr;
}
int main() {
    insert_at_end(2);
    insert_at_end(3);
    insert_at_end(4);
    insert_at_end(5);
    insert_at_end(6);
    printLL();
    // printf("\n");
    // reversePrint(start);
    reverseLL(start);
    //  printf("%d",start->link->data);
    return 0;
}
