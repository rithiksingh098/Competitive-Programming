#include<bits/stdc++.h>
#define MAXSIZE 500000
using namespace std;
int main()
{
	int T;
	cin>>T;
	
	while(T--)
	{
		char str[MAXSIZE]; 
		int count=0;
		cin>>str;
		int n=sizeof(str)/sizeof(str[0]);
		for(int i=0;i<n;i++)
		{
			if(str[i]=='c'||str[i]=='h'||str[i]=='e'||str[i]=='f')
			{
				i++;
				if(str[i]=='c'||str[i]=='h'||str[i]=='e'||str[i]=='f')
				{
					i++;
					if(str[i]=='c'||str[i]=='h'||str[i]=='e'||str[i]=='f')
					{
						i++;
						if(str[i]=='c'||str[i]=='h'||str[i]=='e'||str[i]=='f')
						{
							count++;
							
							break;
							
						}
						
					}break;
				}
				break;
			}
			break;
		}
		cout<<count;
	}
	
}
