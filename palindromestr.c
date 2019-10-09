#include<stdio.h>
#include<string.h>
/*Palindrome strings are strings that read the same forwards and backwards.
Ex: aba, abba, etc.*/
int main()
{ 
  char str[30]; int i=0,n,flag=0;;
  printf("Enter a string.\n");
  scanf("%s",str);
  n=strlen(str)-1; //since strings are character arrays, the last value lies at length(string)-1 as indexing starts from 0
  while(i<=(strlen(str)/2)+1) //palindrome strings are symmetric. Therefore traverse only half the string.
  {
     if(str[i]!=str[n]) // the first and last letters should be equal for a palindrome. extend this to ther positions such as 2, n-2.....
     {
      flag=1;
      break;
     }
     i++;
     n--;
     
  }
  if (flag==1)
  printf("Not palindrome\n");
  else
  printf("palindrome\n");
  
}
