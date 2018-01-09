#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int l,c;
		cin>>l>>c;
		for(int i=1;i<=l;i++)
		{
			for(int j=1;j<=c;j++)
			{
				if(j%2)
				{
					if(i%2)
					{
						cout<<"*";
					}
					else
					{
						cout<<".";
					}
				}
				else
				{
					if(i%2)
					{
						cout<<".";
					}
					else
					{
						cout<<"*";
					}
				}
			}
			cout<<endl;
		}
		cout<<"\n\n";
	}
	return 0;
}
