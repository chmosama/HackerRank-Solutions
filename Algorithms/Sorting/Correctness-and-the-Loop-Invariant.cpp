#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;
// Sort.
int main(void) {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(arr,arr+n);
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
