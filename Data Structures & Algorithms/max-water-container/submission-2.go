func maxArea(heights []int) int {
   n:=len(heights)
   i,j:=0,n-1
   maxWater:=0
   for i<j{
      waterCollected:=min(heights[i],heights[j])*(j-i)
       
	   if(heights[i]<heights[j]){
	i++
	   }else{
		j--
	   }
       maxWater=max(maxWater,waterCollected)
   }
   return maxWater
}
