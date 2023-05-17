#include<stdio.h>
#include<stdlib.h>

//array representation of tree

void tree(int current,int prev,int array[])
{
    for(int x=0;x<sizeof(array)/sizeof(array[0]);x++)
    {
        if(array[x]==prev && current!=x)
        {
            tree(x,array[x],array);
            printf("%d ",array[x]);
        }
    }

}
int main()
{
    int array[]={1,5,5,2,2,-1,3};
    tree(0,-1,array);



}