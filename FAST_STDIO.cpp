//Fastest method for STDIO the 'integer' datatype.

#include<bits/stdc++.h>
using namespace std;

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
main(){
  std::ios_base::sync_with_stdio(false);
  int varint;
  fastscan(varfloat);
  cout<<varint<<endl;
}    
