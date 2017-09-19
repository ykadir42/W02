#include <stdio.h>

//Finds the sum of all the whole numbers up to n that are multiples of a or b
int multiples(int a, int b, int n){
	int ans = 0;
	int i;
	for(i=0; i<n; i++)
		if(i%a==0||i%b==0)
			ans+=i;
	return ans;
}

int main(){
	printf("%d\n", multiples(3, 5, 1000)); //233168
	return 0;
}