class Solution {
    fun solution(arr: IntArray): Double {
        var answer:Double = 0.0
        var sum:Double = 0.0
        val size:Int = arr.size

        for(i in 0..size-1){
            sum += arr[i]
        }

        answer = sum / size

        return answer
    }
}