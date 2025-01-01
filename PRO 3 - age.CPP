//chec inputed age
#include <iostream.h>
void main()
{
	int age;
	cout<<"\n enter age:";
	cin>>age;
	if(age>0 && age<=10)
	cout<<"inchild";
	else if (age >11 && age <=20)
	cout <<"inteenage";
	else if (age <21 && age <=25)
	cout<<"\n young";
	else if (age>26 && age<=35)
	cout<<"\n younger";
	(age>36 && age <60)
	cout <<"\n older";
}