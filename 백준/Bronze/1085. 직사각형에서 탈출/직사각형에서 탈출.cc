#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;
	int dis1, dis2, dis3, dis4, min_dis;

	cin >> x >> y >> w >> h;
	dis1 = x;
	dis2 = y;
	dis3 = h - y;
	dis4 = w - x;

	min_dis = min(dis1, dis2);
	min_dis = min(dis3, min_dis);
	min_dis = min(dis4, min_dis);

	cout << min_dis;

	return 0;
}