#include <cmath>
#include <cstdio>
#include<cstring>
using namespace std;
int main() {
    int t;
    char s[10001];
    scanf("%d",&t);
    while(t--)
        {
        scanf("%s",s);
        int i=0,j=strlen(s);
        int d=1;
        for(i=0;i<j-1;i++)
            {
           if(!(abs(s[i+1]-s[i])==abs(s[j-i-1]-s[j-i-2])))
               {
                    d=0;
                   break;
               }         
        }
        if(d==0)
            {
            printf("Not Funny\n");
        }
        else
            {
            printf("Funny\n");
        }          
     }
    return 0;
}
