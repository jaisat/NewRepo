#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int s = 0;
	int e = n - 1;
	int ans = -1;
	while(s <= e ){
		int mid = s + (e - s)/2;
		if(check(mid)){
			e = mid - 1;
			ans = mid;
		}else{
			s = mid + 1;
		}
	}
	cout << ans << "\n";
}
