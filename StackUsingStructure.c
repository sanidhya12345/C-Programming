#include <stdio.h>
# define size 10

struct stack{
    int data[size];
    int top;
}s;
int isEmpty(struct stack *ps){
    if(ps->top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack *ps,int key){
    if(ps->top==size-1){
        printf("stack is full");
        return;
    }
    ps->top=ps->top+1;
    ps->data[ps->top]=key;
}

int pop(struct stack *ps){
    if(ps->top==-1){
        printf("stack is empty");
        return;
    }
    int temp=ps->top;
    ps->top=ps->top-1;
    return temp;
}
void print(struct stack *ps){
    while(ps->top!=-1){
        printf("%d ",ps->data[ps->top]);
        ps->top=ps->top-1;
    }
}
int main() {
    s.top=-1;
    struct stack *ps=&s;
    push(ps,10);
    push(ps,20);
    push(ps,30);
    print(ps);
    return 0;
}
