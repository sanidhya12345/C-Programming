#include <stdio.h>
# define size 10
int stack[size];
int top=-1;

void push(int key){
    if(top==size-1){
        printf("Stack is Full");
        return;
    }
    top=top+1;
    stack[top]=key;
}
void print(){
    while(top!=-1){
        printf("%d ",stack[top]);
        top=top-1;
    }
}
int pop(){
    if(top==-1){
        printf("Stack is Empty");
        return;
    }
    int temp=stack[top];
    top=top-1;
    return temp;
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
int main() {
    push(10);
    push(20);
    push(30);
    printf("%d\n",pop());
    print();
    return 0;
}
