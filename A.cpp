#include <iostream>
using namespace std;
int f(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	return f(n-1)+f(n-2)+f(n-3);
}
int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	cout << f(n);
}
