#include <stdio.h>

int a, b, u, v, n, i, j, ne = 1;
int visited[10] = {0}, min, mincost = 0, cost[10][10];

int main() {
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);

    printf("\nEnter the cost adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;  
        }
    }

    visited[0] = 1;  
    printf("\nThe edges of the Minimum Cost Spanning Tree are:\n");

    while (ne < n) {
        for (i = 0, min = 999; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (cost[i][j] < min && visited[i] && !visited[j]) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        if (!visited[v]) {
            printf("\nEdge %d: (%d -> %d)\tCost: %d", ne++, a, b, min);
            mincost += min;
            visited[v] = 1;
        }

        cost[a][b] = cost[b][a] = 999;
    }

    printf("\n\nMinimum cost = %d\n", mincost);
    return 0;
}


//output
Enter the number of nodes: 4

Enter the cost adjacency matrix:
0 4 9 0
4 0 2 6
9 2 0 3 
0 6 3 0        

The edges of the Minimum Cost Spanning Tree are:

Edge 1: (0 -> 1)	Cost: 4
Edge 2: (1 -> 2)	Cost: 2
Edge 3: (2 -> 3)	Cost: 3

Minimum cost = 9
//
