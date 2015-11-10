#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
// Externsion to previous question. 
int main()
{
    int n,x;
    int count[100];
    memset(count,0,sizeof(count));
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x);
        count[x]++;
    }
    for (int i=0;i<100;i++)
        for (int j=0;j<count[i];j++)
            printf("%d ",i);
}
