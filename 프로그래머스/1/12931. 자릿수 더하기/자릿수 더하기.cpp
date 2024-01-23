#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    int num = 0;
    int share = 0;

    while (n != 0) {
        share = n % 10;
        n = n / 10;
        answer += share;
    }

    return answer;
}