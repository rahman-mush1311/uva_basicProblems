#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,t,j,n,x;
    int a[10000];

    scanf("%d",&t);
    for(i=0;i<t;i++)
      {
        scanf("%d",&n);
        for(j=0;j<n;j++)
          {
              scanf("%d",&a[j]);

        }
        sort(a,a+n);
        x=2*(a[n-1]-a[0]);
        printf("%d\n",x);


    }
return 0;
}
