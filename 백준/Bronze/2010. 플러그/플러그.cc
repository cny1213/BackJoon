//백준2010. 플러그
// <기능>
// 1. 멀티탭의 개수 N과 그 멀티탭 각각의 돼지코 수를 입력받는다.
// 2. 최종 사용할 수 있는 돼지코의 수를 계산한다.
// [("멀티탭1" - 1) + ("멀티탭2" - 1) + ("멀티탭3" - 1) + .....이런식으로 계산하면 됨]
// 3. 출력한다

#include <iostream>
using namespace std;

int main() {
	int N, number_plug, result=0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> number_plug;
		result += (number_plug - 1);
	}
	result += 1;
	cout << result;

	return 0;
}