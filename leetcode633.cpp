#include<iostream>
using namespace std;
int main()
{
    int n=18,l=0,r=n,mid,i,j,c;
    bool flag =false;
    //step 1
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(n==mid*mid)
        {
            r=mid;
            break;
        }
        else if(n>mid*mid) l=mid+1;
        else if(n<mid*mid) r=mid-1;
    }
    //step 2
    l=0;
    while(l<=r)
    {
        i=l,j=r,c=n-r*r;
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(c==mid*mid)
            {
                flag =true;
                cout<<mid<<" "<<r<<endl;
                break;
            }
            else if(c>mid*mid) i=mid+1;
            else if(c<mid*mid) j=mid-1;
        }
        r--,l=j;
        if(flag ==true) break;
    }
    cout<<flag;
}