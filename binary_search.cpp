#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<int> vec = {4,1,2,1,2};
	// example operations (uncomment if needed)
	// vec.push_back(3);
	// cout<<vec.front()<<endl;

	int ans = 0;
	for (int i : vec) {
		ans = ans^i;
	}
	cout << ans << endl;
	return 0;
}