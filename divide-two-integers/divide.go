package main

import "fmt"

func main() {
	res := divide(-21474836482, -3)
	fmt.Println(res)
}

// @author Jayesh
func divide(dividend int, divisor int) int {
	dividendSign := 1
	divisorSign := 1
	if dividend < 0 {
		dividendSign = -1
	}
	if divisor < 0 {
		divisorSign = -1
	}

	if dividend == 0 {
		return 0
	}
	if dividend == -2147483648 && divisor == -2147483648 {
		return 1
	}
	if dividend == 0 {
		return 0
	}

	dividend = dividend * dividendSign //make both numbers positive for simplicity
	divisor = divisor * divisorSign
	answer := 0
	for dividend >= divisor {
		tmp := divisor
		pow := 1
		for tmp+tmp < dividend { //speed up division by doubling divisor at each loop
			tmp = tmp + tmp
			pow = pow + pow
		}
		dividend = dividend - tmp
		answer = answer + pow
	}
	answer = answer * dividendSign * divisorSign
	if answer == 2147483648 {
		return 2147483647
	}
	return answer

}
