#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r,c,count=0;
  cin>>r>>c;
    char arr[r+2][c+2];
    for(int i=0;i<r+2;i++)
    {
    	arr[i][0]='.';
    	arr[i][c+1]='.';
	}
    for(int i=0;i<c+2;i++)
    {
    	arr[0][i]='.';
    	arr[c+2][i]='.';
	}
    for(int i=1;i<r+1;i++)
    {
    	for(int j=1;j<c+1;j++)
    	{
    		cin>>arr[i][j];
    		if(arr[i][j]=='S')
    		{
    			if(arr[i-1][j]=='W'||arr[i][j-1]=='W')
    			{
    				count++;
				}
			}
			if(arr[i][j]=='W')
    		{
    			if(arr[i-1][j]=='S'||arr[i][j-1]=='S')
    			{
    				count++;
				}
			}
		}
	}
	
      if(count>0){ cout<<"No";}
   else {cout<<"Yes";
     for(int i=0;i<r+2;i++)
    {
    	for(int j=0;j<c+2;j++)
    	{
//    		cin>>arr[i+1][j+1];
//    		if(arr[i][j]=='S')
//    		{
//    			if(arr[i-1][j]=='W'||arr[i][j-1]=='W')
//    			{
//    				count++;
//				}
//			}
			if(arr[i][j]=='W')
    		{
//    			if(arr[i-1][j]=='S'||arr[i][j-1]=='S')
    			arr[i-1][j]='D';
				arr[i][j-1]='D';
				arr[i][j+1]='D';
				arr[i+1][j]='D';
			}
		}
	}
	
	for(int i=1;i<r+1;i++)
    {
    	cout<<endl;
    	for(int j=1;j<c+1;j++)
    	{
    		
			cout<<arr[i][j];
		}
	}
   }
	
    return 0;
}
