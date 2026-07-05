func groupAnagrams(strs []string) [][]string {
    mp:=make(map[string][]string)

	for _,s:= range strs{
		sortedS := sortString(s)
		mp[sortedS]=append(mp[sortedS],s)
	}

    var res [][] string
	for _,i:= range mp{
		res=append(res,i)
	}

	return res
}
func sortString (s string )string {
	ch:=[]rune(s)

	sort.Slice(ch, func(i,j int) bool{
		return ch[i]< ch[j]
	})
	return string(ch)
}
