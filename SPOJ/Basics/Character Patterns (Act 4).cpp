#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,c,h,w;
		cin>>l>>c>>h>>w;
		int row = l*(h+1)+1;
		int col = c*(w+1)+1;
		for (int i = 0; i < row; ++i)
		{
			/* code */
			for (int j = 0; j < col; ++j)
			{
				/* code */
	 		if((i%(h+1)==0) || (j%(w+1)==0))
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
