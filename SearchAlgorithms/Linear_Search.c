#include<stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++)
        if (arr[i] == x)
         return i;
    return -1;
}
int main(){
	int n,*ar,search,si;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	ar = (int *)calloc(n*sizeof(int));
	printf("enter the term to be searched");
	scanf("%d",&si);
	src = search(ar,n,si);
	if(arc!=-1){
		printf("Item found at %d\n", src);
	}
	else{
		printf("Item not found.\n");
	}
}