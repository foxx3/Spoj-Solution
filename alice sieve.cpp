#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	long int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		if(n%2==0)
		n=n/2;
		else
		{
			n=n/2;
			n++;
		}
		cout<<n<<endl;
	}
}
