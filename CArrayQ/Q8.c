#include <stdio.h>
/*
Swarnima Bisht
500105696
B-6 
BTech Year 1, Sem 2
*/

//WAP to Bubble sort an Array
#include<stdio.h>
int main()
{
    int temp,n;
    printf("\nEnter the number of Elements = \n");
    scanf("%d",&n);

    int a[n];

    printf("\nEnter the Elements = \n");

    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nElements before sorting = ");

    for (int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }
    

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nElements after sorting are = ");

    for (int i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }
}