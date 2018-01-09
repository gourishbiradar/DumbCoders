#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,c;
		cin>>l>>c;
		int row = 3*l+1;
		int col = 3*c+1;
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if((i%3)==0 || (j%3)==0)
					cout<<"*";
				else
					cout<<".";
			}
			cout<<endl;
		}
		cout<<"\n\n";
	}
	return 0;
}
