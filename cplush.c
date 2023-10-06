#include <iostream>
int sum(int n,int y){
    return n+y;
}
using namespace std;

int main()
{   int total,n,y;
    cout<<"Enter num";
    cin >> n >> y;
    total = sum(n,y);
    cout<<"\nsum = "<<total;
    return 0;
}
