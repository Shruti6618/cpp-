#include <iostream.h>
void main()
{
	int n,c=0,p=1,step=1;
	while(step<11)
	{
	cout<<"enter fibbonacci series n:";
	cin>> n;
	cout<< c <<" ";

	n=c+p;
	c=p;
	p=n;
	step++;
	}
}
