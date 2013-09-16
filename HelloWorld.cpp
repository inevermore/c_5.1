#include<iostream>
using namespace std;
void CtoF(double c)
{
	double f=9*c/5+32;
	cout<<c<<"--->"<<f<<endl;
}
void FtoC(double f)
{
	double c=5/9*(f-32);
	cout<<f<<"--->"<<c<<endl;
}
   int main()
{
   double c,f;
   cout<<"please input c"<<endl;
   cin>>c;
   CtoF(c);
   cout<<"please input f"<<endl;
   cin>>f;
   FtoC(f);
   return 0;
   }
