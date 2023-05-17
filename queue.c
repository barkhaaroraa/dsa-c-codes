#include<stdio.h>
#include<stdlib.h>

//array representation of queue

// int queue[50];
// int front=-1;
// int rear=-1;
// int enqueue(int n)
// {
//     if(rear==49)
//     {
//         printf("overflow");
//     }
//     else if(rear==-1 && front==-1)
//     {
//         rear=0;
//         front=0;
//         queue[rear]=n;
//     }
//     else
//     {
//         rear++;
//         queue[rear]=n;
//     }
// }

// void display()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("underflow\n");
//     }
//     else if(rear>=front)
//     {
//         int i=0;
//         while(front+i<=rear)
//         {
//             printf("%d ",queue[front+i]);
//             i++;
//         }
//         printf("\n");
//     }
// }

// void dequeue()
// {
//     if(front==-1 && rear==-1)
//     {
//         printf("underflow");
//     }
//     else if(rear==front)
//     {
//         rear=front=-1;
        
//     }
//     else
//     {
//         front++;
        
//     }
// }

// int main()
// {
    
//     int a;
//     enqueue(5);
//     enqueue(6);
//     enqueue(7);
//     display();
//     enqueue(1);
//     enqueue(9);
//     enqueue(3);
//     dequeue();
//     display();
// }

// queue implementation using linked list

struct queue{
    int input;
    int* place;
};

struct queue *front=-1;
struct queue *rear=-1;

void enqueue(int n)
{
    struct queue *newnode,*temp;
    newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->input=n;
    newnode->place=0;
    if(front==-1 && rear==-1)
    {
        front=rear=newnode;
        temp=newnode;    
    }
    else
    {
        temp->place=newnode;
        rear=newnode;
        temp=newnode;
    }  
}

void display()
{
    struct queue *temp;
    temp=front;
    if(front==-1 && rear==-1)
    {
        printf("queue empty");
    }
    else{
        while(temp!=0)
        {
            printf("%d ",temp->input);
            temp=temp->place;
        }
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=front->place;
    }
}

int main()
{
    enqueue(5);
    enqueue(3);
    enqueue(2);
    enqueue(9);
    //display();
    enqueue(4);
    enqueue(1);
    dequeue();
    display();

}