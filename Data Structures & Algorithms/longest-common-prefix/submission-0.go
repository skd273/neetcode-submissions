func longestCommonPrefix(strs []string) string {
    pref:=strs[0]

    for i:=1;i<len(strs);i++{
        j:=0
        for j< len(pref) && j<len(strs[i]) {
            if pref[j]!=strs[i][j]{
                break
            }
            j++
        }
        pref=pref[:j]
    }
    return pref
}
