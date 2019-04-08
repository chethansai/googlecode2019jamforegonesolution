#include<iostream>
using namespace std;
class cl
{public:
    bool check(int f)
	{
	    int d=0;
		while(f>0)
		{
			d=f%10;
	    	if(d==4)
			return true;
		 f=f/10;
		}
		return false;
	}
};
int main(void)
	{
	    int n;
	    cin>>n;
	    int c[n];
	    for(int t=0;t<n;t++)
	    {
	      cin>>c[t];
	    }
	    for(int e=0;e<n;e++)
	    { int a=c[e];
		cl checko;
		if(checko.check(a))
		{
		    
		    for (int i = 1; i <=a/2; ++i)
		    {
			    if(!checko.check(i) && !checko.check(a-i))
			    {
				    cout<<"Case #"<<(e+1)<<": "<<i<<" "<<a-i<<"\n";
                    break;
		    	}
	    	}
		    
		}
		else
		     cout<<"Case #"<<(e+1)<<": "<<a<<" 0"<<"\n";
	    }
	}