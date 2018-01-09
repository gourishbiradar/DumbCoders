#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string input;
		cin>>input;
		int len = input.length();
		for(int i=0;i<len/2;i+=2)
		{
			cout<<input[i];
		}
		cout<<endl;
	}
	return 0;
}
