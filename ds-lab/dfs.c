#include<stdio.h>
int stk[100],top = -1;
int visited[100];

void push(int val) {
	stk[++top] = val;
}

int pop()
{
	if(top == -1)
		return -1;
	else
		return stk[top--];
}
void dfs_non_recursive(int adj[10][10],int start,int n) {
	int i;
	push(start);
	visited[start] = 1;
	printf("DFS Traversal (non-recursive): ");
	while(top != -1) {

		int current = pop();
		printf("%d ",current); 
		for(i = n-1; i>=0; i--) { 
			if(adj[current][i] == 1 && !visited[i]) {
				push(i);
				visited[i] = 1;
			}
		}
	}
}

int main() {
	int n,adj[10][10],i,j,start;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter Adjacency Matrix:\n");
	for (i = 0; i<n; i++)
		for(j = 0; j<n; j++)
			scanf("%d",&adj[i][j]);
	printf("Enter The starting Vertex(0  to %d):",n-1);
	scanf("%d",&start);
	dfs_non_recursive(adj,start,n);
	return 0;
}

