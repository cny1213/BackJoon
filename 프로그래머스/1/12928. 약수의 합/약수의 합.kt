class Solution {
    fun solution(n: Int): Int {
        var answer = 0
        for(v1 in 1..n){
            if(n % v1 == 0){
                answer += v1
            }
        }
        return answer
    }
}