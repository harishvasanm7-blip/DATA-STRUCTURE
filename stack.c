//Stack
#include <stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int ele){
    if(top==size-1){
        printf("stack overflow\n");
    }
    else{
        top+=1;
        stack[top]=ele;
    }
}
int pop(){
    if(top==-1){
        printf("stack underflow\n");
        return -1;
    }
    else{
        int ele=stack[top];
        top-=1;
        return ele;
    }
}
int peek(){
    if(top==-1){
        printf("stack is empty\n");
        return -1;
    }
    else{
        return stack[top];
    }
}

int display(){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){
    int ch;
    while (1){
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                {
                    int ele;
                    printf("enter ele to push:");
                    scanf("%d",&ele);
                    push(ele);
                    break;
                }
            case 2:
                {
                    int ele=pop();
                    if(ele!=-1){
                        printf("popped ele:%d\n",ele);
                    }
                    break;
                }
            case 3:
                {
                    int ele=peek();
                    if(ele!=-1){
                        printf("top ele:%d\n",ele);
                    }
                    break;
                }
            case 4:
            {
                display();
                break;
            }
            case 5:
                {
                   return 0;
                }
            default:
                {
                    printf("invalid choice\n");
                }
        }
    }
}