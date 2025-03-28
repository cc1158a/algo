#include "dp.h"
#include "stdio.h"
#include <string.h>
int longest_common_substring(char *a, char *b)
{
    int n = strlen(a);
    int m = strlen(b);
    int *dp = malloc(n + 1, m + 1 * sizeof(int));
    for(int i=0;i<(n+1)*(m+1);i++){
        dp[i]=0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            int index=i*(n+1)+j;
            int pre_index=(i-1)
        }
    }
    free(dp);
    return 0;
};