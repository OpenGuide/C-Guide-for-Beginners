#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define rt return 0
#define endln "\n"
#define for1(i,a,b) for(long long int i=a;i<b;i++)
#define for2(i,a,b) for(long long int i=a;i>b;i--)
//  cout << fixed << setprecision(0) << pi <<" "<<npi<<endl;

typedef long long int int1;
int1 gcd(int1 a, int1 b) 
{ 
    
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
   
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
   
int main()
{
	int1 a,b;
	cin >>a >> b;
	int1 p =a*b;
  int1 lcm = p/gcd(a,b);
  cout << lcm<<"\n";
}