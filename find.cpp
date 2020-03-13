#include<stdio.h>
int  find(int a[],int x,int n) {
	int y=-1;
	for (int  i = 0; i < n; i++) {
		if (x == a[i]) {
			y = i;
			break;
		}
	}
	return y;
}
int main() {
	int n, a[1000],x;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &x);
	int result = find(a, x, n);
	if (result == -1)printf("No find\n");
	else printf("%d\n", result);
}