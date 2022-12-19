#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(cin>>s)
	{ int count=0;
	  int a=0,b=0;
	  int al=5,bl=5;
	  for(int i=0;i<10;i++)
	  { count++;
	    if(i%2==0)
	    al--;
	    else
	    bl--;
	    if(s[i]=='1')
	    { if(i%2==0)
	      a++;
	      else
	      b++;
	    }
	    if(b-a>al)
	    { cout<<"TEAM-B"<<" "<<count<<"\n";
	      break;
	    }
	    if(a-b>bl)
	    { cout<<"TEAM-A"<<" "<<count<<"\n";
	      break;
	    }
	  }
	  if(a==b)
	  { for(int i=10;i<20;i+=2)
	    { if(s[i]=='1'&&s[i+1]=='0')
	      { a++;
	        cout<<"TEAM-A"<<" "<<i+2<<"\n";
	        break;
	      }
	      else if(s[i]=='0'&&s[i+1]=='1')
	      { b++;
	        cout<<"TEAM-B"<<" "<<i+2<<"\n";
	        break;
	      }
	    }
	  }
	  if(a==b)
	  cout<<"TIE"<<"\n";
	}
	return 0;
}
