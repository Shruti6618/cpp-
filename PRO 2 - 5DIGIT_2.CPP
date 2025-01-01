#include<iostream.h>
void main()
{
	int x,sum=0;
	cout<<"\n enter val;ue of x:";
	cin>>x;
	while(x>0)
	{
		sum=sum+x%10;
		x=x/10;
	}
	cout<< x;
	cout<<sum;
}