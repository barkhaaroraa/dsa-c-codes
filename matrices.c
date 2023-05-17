#include<stdio.h>
//multiplication of matrices
// int main()
// {
//     int arr[3][3]={{1,2,2},{1,2,1},{1,1,3}};
//     int arr1[3][3];
//     int n=3;
//     int product,sum;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             sum=0;
//             for(int k=0;k<n;k++)
//             {
//                 product=0;
//                 product=arr[i][k]*arr[k][j];
//                 sum=sum+product;
//             }
//             arr1[i][j]=sum;
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main() 
// { 
//    int a; 
//    char *x; 
//    x = (char *) &a; 
//    a = 512; 
//    x[0] = 1; 
//    x[1] = 2; 
//    printf("%dn",a);   
//    return 0; 
// }
//string inputs
int main()
{
    char arr[5];
    //scanf("%s",arr); for no space entry but can lead to memory buffer overflow
    fgets(arr,30,stdin); //string input with spaces and higher limit
    int a,b,c,d,e;
    printf("%s",strupr(arr));

}