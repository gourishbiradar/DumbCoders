#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,c,s;
		cin>>l>>c>>s;
		int row = l*(s+1)+1;
		int col = c*(s+1)+1;
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
      //The boundaries of the smaller squares
				if (i%(s+1)==0 || j%(s+1)==0)
				{
					cout<<"*";
				}
				else
				{
          //Diagonal element or diagonal element of the smaller square
					if(i==j || ((i-j)%(s+1)==0 && ((i-j)/(s+1)%2==0)))
					{
						cout<<"\\";
					} //Non-principal diagonal element of the smaller square
					else if((i+j)%(s+1)==0 && ((i+j)/(s+1)%2==0))
					{
						cout<<"/";
					}
					else //Every other element of the smaller square
						cout<<".";
				}

			}
			cout<<endl;
		}
		cout<<"\n\n";
	}
	return 0;
}
