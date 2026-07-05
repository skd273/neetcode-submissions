func majorityElement(nums []int) int {
    mp:=make(map[int]int)
	maxi,maxEle:=0,0

	for _,num:=range nums{
		mp[num]++

		if mp[num]>maxi{
			maxi=mp[num]
			maxEle=num
		}
	}
	return maxEle
}
