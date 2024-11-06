#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#define N 6000
using namespace std;
bool a[N * 2];
int main(){
	int n;
	scanf("%d", &n);
	memset(a, true, sizeof(a));
	a[0] = a[1] = false;
	for(int i = 2; i <= N; i ++){
		if(a[i]){
			for(int j = 2; i * j <= N; j ++){
				a[i * j] = false;
			}
		}
	}
	for(int i = 4; i <= n; i += 2){
		for(int j = 2; j <= i / 2; j ++){
			if(a[j] && a[i - j]){
				printf("%d=%d+%d\n", i, j, i - j);
				break;
			}
		}
	}
	return 0;
}