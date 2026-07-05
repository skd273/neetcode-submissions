func majorityElement(nums []int) int {
    count,ele:=0,0

	for _,num :=range nums{
		if count ==0 {
			ele=num
		}
		if num == ele{
			count++
		}else{
			count --
		}
	}
	return ele
}
