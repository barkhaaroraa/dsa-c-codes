#include<stdio.h>
#include<stdlib.h>
// struct person_info
// {
//     char name[40];
//     int age;
// };

// int main()
// {
//     int n;
//     scanf("%d",&n);
    //struct person_info info[n];
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%s",&info[i].name);
    //     scanf("%d",&info[i].age);
    // }

    // for(int i=0;i<n;i++)
    // {
    //     printf("%s  %d \n",info[i].name,info[i].age);
    // }
//     struct person_info *pointer;
//     pointer=(struct person_info*)malloc(n*sizeof(struct person_info));


//     for(int i=0;i<n;i++)
//     {
//         scanf("%s",&(pointer+i)->name);
//         scanf("%d",&(pointer+i)->age);
//     }

//     for(int i=0;i<n;i++)
//     {
//         printf("%s  %d \n",(pointer+i)->name,(pointer+i)->age);
//     }
// }




//linked list input+display



struct nodes
{
    int input;
    struct nodes* place;
};

int main()
{
    struct nodes *head,*newnode,*temp;

    head=0;
    for(int i=0;i<5;i++)
    {
        newnode=(struct nodes*)malloc(sizeof(struct nodes));
        printf("enter element for array");
        scanf("%d",&newnode->input);
        newnode->place=0;
        if(head==0)
        {
            head=newnode;
            temp=head;
        }
        else
        {
            temp->place=newnode;
            temp=newnode;
        }
    }

    
    // temp=head;
    // while(temp!=0)
    // {
    //     printf("%d  ",temp->input);
    //     temp=temp->place;
    // }
    
}
    

    // int search,result=0;
    // printf("enter number to be searched");
    // scanf("%d",&search);
    // temp=head;
    // while(temp!=0 && result==0)
    // {
    //     if(temp->input==search)
    //     {
    //         result=1;
    //         printf("found");
    //     }
    //     else
    //     {
    //         temp=temp->place;
    //     }
    // }

    // printf("enter index to be printed");
    // int count=0,index;
    // scanf("%d",&index);

    // temp=head;
    // while(temp!=0 && count<=index)
    // {
        
    //     if(count==index)
    //     {
    //         printf("%d",temp->input);
    //         count++;

    //     }
    //     else
    //     {
    //         count++;
    //         temp=temp->place;
            
    //     }
    // }
// }

// int append(struct nodes *head)
// {
//     struct nodes *temp=head;
//     struct nodes *node;
//     node=(struct nodes*)malloc(sizeof(struct nodes));
//     while(temp->place!=0)
//     {
//         temp=temp->place;
//     }
//     temp->place=node;
//     printf("enter number to be appended");
//     scanf("%d",&node->input);
    
//     node->place=0;
//     return 0;
// }

// int insert(struct nodes *head,int n)
// {
//     struct nodes *temp=head;
//     struct nodes *node;
//     struct nodes *tempprev=head;
//     struct nodes *tempnext;
//     node=(struct nodes *)malloc(sizeof(struct nodes));
//     printf("enter index");
//     int index,count=0;
//     scanf("%d",&index);
//     printf("enter number");
//     scanf("%d",&node->input);
    
//     if(index==0)
//     {
//         tempnext=head;
//         head=node;
//         node->place=tempnext;
//     }

//     else
//     {
//         while(temp->place!=0 && count<=index)
//         {

//             if(count==index-1)
//             {
//                 tempprev=temp;
//                 temp=temp->place;
//                 tempprev->place=node;
//                 node->place=temp;
                
//             }
//             // else if(count==index)
//             // {
//             //     node->place=temp;
//             // }
//             temp=temp->place;
//             count++;
        
//         }

//     }

// }


//int func(int *ptr);
//int main()
//{
    // int n=5;
    // int *ptr;
    // ptr=(int*)malloc(n*sizeof(int));
    // for(int i=0;i<n;i++)
    // {
    //     scanf("%d",(ptr+i));
    // }

    // for(int i=0;i<n;i++)
    // {
    //     printf("%d \n",*(ptr+i));
    // }
    // return 0.23;

    // printf("%d",(ptr+3)-(ptr+4));
    // int a[3]={1,2,3};
    // func(a);
    // return 0;

    // int i=5;
    // int *ptr=&i;
    // ptr=10;
    // *ptr=100;
    // printf("%d %d",ptr,&i);
// }//


//     return 0;
// }

// int reverse(struct nodes *head)
// {
//     struct nodes *temp,*prev,*next;
//     next=head;
//     temp=head;
//     prev=0;
//     int count=0;
    
//     while(next!=0)
//     {
//         next=next->place;
//         temp->place=prev;
//         prev=temp;

//         temp=next;

//     }
//     head=prev;
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d  ",temp->input);
//         temp=temp->place;
//     }
// }

// struct doublenodes
// {
//     int input;
//     struct doublenodes *prev;
//     struct doublenodes *next;
// };

// int main()
// {
//     struct doublenodes *head,*previous,*node,*temp,*headback;
//     int n=6;
//     head=0;
//     previous=0;
//     for(int i=0;i<n;i++)
//     {
//         node=(struct doublenodes*)malloc(sizeof(struct doublenodes));
//         scanf("%d",&node->input);
//         node->next=0;
//         if(head==0)
//         {
//             head=node;
//             previous=0;
//             temp=node;

//         }
//         else
//         {
//             node->prev=temp;
//             temp->next=node;
//             temp=node;

//         }
//     }
//     headback=node;
//     temp=headback;
//     while(temp!=0)
//     {
//         printf("%d",temp->input);
//         temp=temp->prev;
//     }
    
// }

