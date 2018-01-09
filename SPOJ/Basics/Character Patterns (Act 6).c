#include <iostream>
using namespace std;
int main() 
{
	int t;
	scanf("%d", &t);
	while(t--)
	{	
    int l,c,h,w;
    cin>>l>>c>>h>>w;
		int row=l+h+(l*h);
		int col=c+w+(c*w);
		for(int i=1;i<=row;i++)
		{
			for(int j=1;j<=col;j++)
			{
				if((i%(h+1)==0) && (j%(w+1)==0))
				cout<<"+";
				else if(i%(h+1)==0)
				cout<<"-";
				else if(j%(w+1)==0)
				cout<<"|";
				else
				cout<<".";
			}
			cout<<endl;
		}
		cout<<"\n\n";
	}
	return 0;
}
