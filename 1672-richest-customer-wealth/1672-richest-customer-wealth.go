func maximumWealth(accounts [][]int) int {
    maxWealth := 0
    for i := range accounts {
        wealth := 0
        for j := range accounts[i] {
            wealth = wealth+accounts[i][j]
        }
        if wealth > maxWealth {
            maxWealth = wealth
        }
    }
    return maxWealth
}