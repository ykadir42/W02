#include <stdio.h>

int lcm(int n){
	int ans = 1;
	int found = 0;
	//printf("starting while loop\n");
	while(found==0){
		//printf("started while loop\n");
		//printf("found = %d\n", found);
		int i;

		for(i = 1; i<=n; i++){
			if(ans % i != 0) break;
			if(i==n) found=1;
		}
		//printf("ans = %d\n", ans);
		if(found==0) ans++;
	}
	return ans;
}

int main(){
	printf("%d\n", lcm(20)); //232,792,560
	return 0;
}
