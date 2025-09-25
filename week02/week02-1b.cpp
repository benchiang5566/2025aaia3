/// week02-1b.cpp Part 1
/// SOIT106_ADVANCE_001 Uing C
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int co=n;
	int ans = 0;
	while(n>0){
		ans = ans * 10 + n % 10;
		n /= 10;
	}

	printf("%d+%d=%d\n", co, ans, co+ans);
}
