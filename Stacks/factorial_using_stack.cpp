#include<iostream>
#define MAX 100
typedef unsigned long long int ll;
using namespace std;

ll stack[MAX];
int top = -1;

// Pushing into Stack
void push(ll num)
{
	while(num != 0)
	{
		top++;
		stack[top] = num;
		num--;
		if(top == MAX-1)
		{
			cout<<"\nStack overflow !!\n";
			exit(0);
		}
	}
}


// Calculating Factorial
void calc_facto()
{
	ll factorial = 1;
	while(top != -1)
	{
		factorial *= stack[top];
		top--;
	}
	cout<<factorial<<"\n";
}


// Driver Code
int main()
{
	ll number;
	cout<<"Enter the nunber whose Factorial you want to calculate : ";
	cin>>number;
	
	if(number < 0)
		cout<<"\nInvalid Input !!!\n";
	else
	{
		push(number);
		cout<<"\n\nFactorial of "<<number<<" is ";
		calc_facto();
	}
	
	return 0;
}