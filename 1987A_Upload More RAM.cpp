#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n>>k;
    if(k==1) cout<<n<<endl;
    else
        cout<<(n*k-(k-1))<<endl;
    }

}
