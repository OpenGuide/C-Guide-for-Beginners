//palindrome number check
void pal(int n)
{
num=n;
	if(num<0)
	{
		cout<<"Kindly enter a positive number only"<<endl;
	}
	else
	{
		rev=0;
		temp=num;
		while(temp!=0)
		{
			x=temp%10;
			rev=(10*rev)+x;
			temp/=10;
		}
	}
	if(rev==num)
	{
		cout<<"palindrome"<<endl;
	}
	else
	{
		cout<<" not palindrome"<<endl;
	}
}
void main()
{
	int m;
	cout<<"Enter a number"<<endl;
	cin>>m;
  pal(m);
  
	
	
	
}
