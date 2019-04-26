#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    int ar[]= {-100,2,6,7,9,22,3232,55,-2,-6,8};
    for(int i=1; i<=10; i++)
        cout<<ar[i]<<" ";

        cout<<"\n\n";

    for(int i=2; i<=10; i++)
    {

        int temp=ar[i];
        int ptr=i-1;
        while(temp<ar[ptr])
        {
            ar[ptr+1]=ar[ptr];
            ptr=ptr-1;
        }
        ar[ptr+1]=temp;
    }

    for(int i=1; i<=10; i++)
        cout<<ar[i]<<" ";
}
