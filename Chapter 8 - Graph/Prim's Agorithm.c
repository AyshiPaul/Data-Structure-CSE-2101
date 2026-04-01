#include <stdio.h>

int main() {
    int n, i, j;
    int cost[10][10];
    int visited[10] = {0};
    int min, mincost = 0;
    int a, b;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    visited[1] = 1; // start from node 1

    printf("Edges in MST:\n");

    for(int k = 1; k < n; k++) {
        min = 999;

        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(visited[i] && !visited[j] && cost[i][j] < min) {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }

        printf("%d -> %d = %d\n", a, b, min);
        mincost += min;
        visited[b] = 1;
    }

    printf("Total cost = %d", mincost);

    return 0;
}
