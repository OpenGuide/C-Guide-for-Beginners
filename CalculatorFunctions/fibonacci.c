// Make a function that calculates the first n fibonacci numbers. Bonus points if it is recursive! 


// To print fibonacci series in C programming language

#include<stdio.h> 
int fibonacci(int n)   //n is user defined variable
{ 
   if (n <= 1) 
      return n; 
   return fibonacci(n-1) + fibonacci(n-2); 
} 
  
int main ()    
{ 
  int n = 9;  //The value of n is given by user
  printf("%d", fibonacci(n)); //to print the fibonacci series
  getchar(); //getchar is a function that reads a single character
  return 0; 
} 



// To print Fibonacci Series using Recursion in C++ programming language

#include<bits/stdc++.h> 
using namespace std; 
  
int fibonacci(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
} 
  
int main () 
{ 
    int n = 9; 
    cout << fibonacci(n); 
    getchar(); 
    return 0; 
} 



// To print Fibonacci Series using Recursion in python programming language

# Function for nth Fibonacci number 
  
def Fibonacci(n): 
    if n<0: 
        print("Incorrect input") 
   // First Fibonacci number is 0 
    elif n==0: 
        return 0
   // Second Fibonacci number is 1 
    elif n==1: 
        return 1
    else: 
        return Fibonacci(n-1)+Fibonacci(n-2) 
  
// Driver Program   
print(Fibonacci(9)) 
