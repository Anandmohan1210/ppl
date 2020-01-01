#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

int main()
{
	int x,y;
	cout<<"enter two no : ";
	cin>>x>>y;
	swap(x,y);
	cout<<"after swapping : \n ";
	cout<<x<<" "<<y;
	return 0;
}