#include <iostream>

using namespace std;

int main() {
	long long int n, m;
	cin >> n >> m;
	cout<<(n%m==0?m+n%m:n%m)<<endl;
	return 0;
}
