#include <iostream>
using namespace std;
double fact(int n)	//Number Factorial calculating Function
{ 
	if (n == 0 ||  n == 1) 
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
		int prec=0;
		cout << "Input the precision"<<endl;
		cin>>prec;		//Input the number`s precision
		double sum= 2;
		for ( int i=2; i <= prc; i++)	 
		sum += 1/fact(i);
		cout<<"Your E number is = " <<sum<<endl;	//Output The number E with your entern Precision
}

