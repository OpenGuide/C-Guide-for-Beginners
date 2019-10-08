#include<stdio.h>
#include<stdlib.h>
int main()
{   system("cls");
    int n,a,b;
    scanf("%d",&n); // number of lines in pyramid
    a=n;
    b=1;
    for(int i=0;i<n;i++)   //loop for number of lines
    {
        for(int j=0;j<a;j++)   // loop of spaces
        {
            printf(" ");     
        }
        for(int k=0;k<b;k++) //loop for number of stars
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
        a--;
        b++;
    }

    
}
