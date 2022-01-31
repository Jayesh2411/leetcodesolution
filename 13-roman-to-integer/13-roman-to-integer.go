func romanToInt(s string) int {
    mapRoman := make(map[string]int)
    mapRoman["I"] = 1
    mapRoman["V"] = 5
    mapRoman["X"] = 10
    mapRoman["L"] = 50
    mapRoman["C"] = 100
    mapRoman["D"] = 500
    mapRoman["M"] = 1000
    
    sum := 0
    for i := 0; i<len(s); i++ {
        if i+1 < len(s) {
           if string(s[i]) == "I" && string(s[i+1]) == "V" {
                sum += 4
                i = i+1
                continue
            } else if i+1 < len(s) && string(s[i]) == "I" && string(s[i+1]) == "X" {
                sum += 9
                i = i+1
                continue
            } else if i+1 < len(s) && string(s[i]) == "X" && string(s[i+1]) == "L" {
                sum += 40
                i = i+1
               continue
            } else if i+1 < len(s) && string(s[i]) == "X" && string(s[i+1]) == "C" {
                sum += 90
                i = i+1
               continue
            } else if i+1 < len(s) && string(s[i]) == "C" && string(s[i+1]) == "D" {
                sum += 400
                i = i+1
               continue
            } else if i+1 < len(s) && string(s[i]) == "C" && string(s[i+1]) == "M" {
                sum += 900
                i = i+1
               continue
            } 
        }
        sum += mapRoman[string(s[i])]
        
    }
    return sum
}