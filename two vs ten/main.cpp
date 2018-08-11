#include <iostream>

using namespace std;

int main()
{
 int t;
    cin>>t;
 while(t--)
    {
    int a;
        cin>>a;
    int count=0;
    if(a%5!=0)
        cout<<"-1";
    else
    {
        while(a%10!=0)
        {
            a=a*2;
            count=count+1;
        }

    cout<<count<<endl;

    }

    }
    return 0;
}
