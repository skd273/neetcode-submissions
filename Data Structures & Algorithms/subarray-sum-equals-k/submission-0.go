func subarraySum(nums []int, k int) int {
    count,currSum:=0,0
	mp:=make(map[int]int)
	mp[0]=1;

	for _,num:= range nums{
		currSum+=num
		diff:= currSum -k
		count+=mp[diff]
		mp[currSum]++
	}
	return count
}
