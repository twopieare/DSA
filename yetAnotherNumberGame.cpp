#include <bits/stdc++.h>
using namespace std;

main()
{
    int t, n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        if(n % 2 == 1)
            printf("BOB\n");
        else
            printf("ALICE\n");
    }
    return 0;
}
