#include<stdio.h>
int main()
{
    int tc,n,r,c;
    long long int ans;
    scanf("%d",&tc);
    while(tc--)
    {
      scanf("%d %d",&n,&r);
      c=n-r+1;
      ans=1;
       while(c<=n)
      {
        ans=ans*c;
        c++;
      }
      printf("%lld\n",ans);
    }
    return 0;
}
