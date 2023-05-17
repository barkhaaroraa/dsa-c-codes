#include<stdio.h>
#include<stdlib.h>

//STACKS USING ARRAY
// int stack[5];
// int top=-1;

// void push()
// {
//     printf("push function\n");
//     int n;
//     scanf("%d",&n);
//     if(top==4)
//     {
//         printf("overfloww\n");
//     }
//     else
//     {
//         top++;
//         stack[top]=n;
//     }
// }

// void display()
// {
//     for(int i=top;i>-1;i--)
//     {
//         printf("%d  ",stack[i]);
//     }
// }

// void pop()
// {
//     printf("pop function \n");
//     if(top==-1)
//     {
//         printf("function underflow \n");
//         return;
//     }

//     else
//     {
//         int popped;
//         popped=stack[top];
//         top--;
//         printf("%d item deleted \n",popped);
//     }
// }

// void peek()
// {
//     printf("top most element \n");
//     if(top==-1)
//     {
//         printf("stack is empty\n");

//     }
//     else
//     {
//         printf("%d is the top most element \n",stack[top]);
//     }

// }


// int main()
// {
//     push();
//     push();
//     push();
//     peek();
//     push();
//     pop();
//     display();
// }


//STACKS USING LINKED LIST

struct nodes
{
    int input;
    int* next;
};

struct nodes *top=0;

void push(int n)
{
    struct nodes *newnode;
    newnode=(struct nodes*)malloc(sizeof(struct nodes));
    newnode->input=n;
    newnode->next=top;
    top=newnode;
}

void display()
{
    struct nodes *temp;
    temp=top;
    if(top!=0)
    {
        while(temp!=0)
        {
            printf("%d ",temp->input);
            temp=temp->next;
        }
    }
    else
    {
        printf("stack is empty");
    }
    printf("\n");
}

void peek()
{
    if(top==0)
    {
        printf("stack empty ");
    }
    else
    {
        printf("%d ",top->input);
    }
    printf("\n");
}

void pop()
{
    struct nodes *temp;
    temp=top;
    if(top==0)
    {
        printf("stack is empty \n");
    }
    else
    {
        printf("element popped %d \n",top->input);
        top=top->next;
        free(temp);
    }
}

int main()
{  
    push(6);
    push(10);
    peek();
    push(100);
    push(20);
    push(7);
    display();
    pop();
    peek();
    display(); 
}