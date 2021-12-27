#include <iostream>

using namespace std ;


string x[5];
int top=-1;

		       bool isempty()
		       {
		       	return (top==-1);
			   }
			   void push(string V)
			   {
			   	if (top==4)
			   	cout<<"stack is FULL"<<endl;
			   	else 
			   	top++;
			   	x[top]=V;
			   }
			     void pop()
			   {
			   	if (isempty())
			   	cout<<"stack is uderflow"<<endl;
			   	else
				top--;
			   }
			   void showtop()
			   {
			   	if (isempty())
			   	cout<<"stack is uderflow"<<endl;
			   	else
			   	cout<<"Element at top is :" <<x[top]<<endl;
			   }
			   void Display()
			   {
			    if (isempty())
			   	cout<<"stack is uderflow"<<endl;
			   	else
			   	for(int i=top;i>=0;i--)
			   	cout<<x[i]<<endl;
			   }
			   


int main()
{
	
 int  ch;
 string element;
	while(1)
	{
		cout<<"1.push   2.pop    3.display 4.showTop"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: 
			cout<<"Please  enter First Name"<<endl;
			cin>>element;
			push(element);
			break;
			
			case  2:
				pop();
				cout<<endl;
				break;
				
				case  3:
					Display();
					break;
				case  4:
					showtop();
					break;
					default:
				
					break;
					
		}
	}
   
}

