//equlibrium point
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
int equilibrium_point(int a[],int n)
{
	int sum =0,leftsum=0,rightsum;

	for(int i=0;i<n;i++)
		sum += a[i];
	
	rightsum = sum;
	for(int i=0;i<n;i++)
	{
		rightsum -= a[i];
		if(leftsum == rightsum)
		{
			return i+1;
		} 
		leftsum += a[i];

	}
	return -1;
}
int main()
{int t;
cin>>t;
while(t--)
	{
	int n;
	cin >> n;
	int a[n+5];
	for(int i=0;i<n;i++)
		cin >> a[i];
	cout << equilibrium_point(a,n) << endl;}

}
