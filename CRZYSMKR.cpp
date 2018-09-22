#include <iostream>
using namespace std;

int main()
{
	long long int t,n;
	cin >> t;
	int i;
	while(t--)
	{
		cin >> n;
		i=0;
		for(i=0;i<11;i++)
		{
			if( ( 30*(n%11) + i )%11 == 0 )
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}