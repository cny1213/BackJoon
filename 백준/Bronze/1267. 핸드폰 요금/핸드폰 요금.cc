#include <iostream>
#include <string>
using namespace std;

int main() {

	int N, time, yPrice=0, mPrice=0;
	string result;
	int price = 0;
	//1. "동호의 저번 달 통화 개수" N 을 입력받는다
	cin >> N;
	//2. N의 개수 만큼 통화시간을 입력받는다. (for문 이용)
	for (int i = 0; i < N; i++) {
		cin >> time;

		int yPrice_temp = (time / 30 + 1) * 10;
		yPrice += yPrice_temp;
		int mPrice_temp = (time / 60 + 1) * 15;
		mPrice += mPrice_temp;
	}


	if (yPrice == mPrice) {
		cout <<  "Y M " << yPrice;
	}
	else {
		price = (yPrice < mPrice) ? yPrice : mPrice;
		result = (yPrice < mPrice) ? "Y" : "M";

		cout << result << " " << price;
	}

	return 0;
}