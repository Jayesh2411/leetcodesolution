package main

import "fmt"

func isValidSudoku(board [][]byte) bool {

	for i := 0; i < 9; i++ {
		rowSet := make(map[string]bool, 0)
		colSet := make(map[string]bool, 0)
		for j := 0; j < 9; j++ {
			if !checkSudoko(board, i, j, rowSet) {
				return false
			}
			if !checkSudoko(board, j, i, colSet) {
				return false
			}
		}
	}

	offsetRow := 0
	offSetCol := 0
	i := 0
	j := 0
	set := make(map[string]bool, 0)

	for i < offsetRow+3 && i < 9 {
		for j < offSetCol+3 && j < 9 { //check for first row and consecutive 3 cols
			if !checkSudokoAll(board, i, j, set) { //check if element already there in set
				return false
			}
			j++
		}
		i++
		//if row is either 3rd, 6th or 9th and col has reached last index, move it forward 3 places(row offset)
		if i%3 == 0 && j == 9 {
			set = make(map[string]bool, 0)
			offsetRow += 3
			i = offsetRow
			offSetCol = 0
		} else if i%3 == 0 { // else reset row to previous starting point  and move cols starting point by 3 places
			set = make(map[string]bool, 0)
			i = offsetRow
			offSetCol = offSetCol + 3
		}
		j = offSetCol
	}

	return true
}

func checkSudoko(board [][]byte, i int, j int, set map[string]bool) bool {
	if string(board[i][j]) != "." {
		if set[string(board[i][j])] == false {
			set[string(board[i][j])] = true
		} else {
			return false
		}
	}
	return true
}

func checkSudokoAll(board [][]byte, i int, j int, rowSet map[string]bool) bool {
	if string(board[i][j]) != "." {
		if rowSet[string(board[i][j])] == false {
			rowSet[string(board[i][j])] = true
		} else {
			return false
		}
	}
	return true
}

func main() {

	b := [][]byte{
		{'.', '.', '4', '.', '.', '.', '6', '3', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'5', '.', '4', '.', '.', '.', '.', '9', '.'},
		{'.', '.', '.', '5', '6', '.', '.', '.', '.'},
		{'4', '.', '3', '.', '.', '.', '.', '.', '1'},
		{'.', '.', '.', '7', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '9', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'},
		{'.', '.', '.', '.', '.', '.', '.', '.', '.'}}
	c := [][]byte{
		{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
		{'6', '.', '.', '1', '9', '5', '.', '.', '.'},
		{'.', '9', '8', '.', '.', '.', '.', '6', '.'},
		{'8', '.', '.', '.', '6', '.', '.', '.', '3'},
		{'4', '.', '.', '8', '.', '3', '.', '.', '1'},
		{'7', '.', '.', '.', '2', '.', '.', '.', '6'},
		{'.', '6', '.', '.', '.', '.', '2', '8', '.'},
		{'.', '.', '.', '4', '1', '9', '.', '.', '5'},
		{'.', '.', '.', '.', '8', '.', '.', '7', '9'}}
	fmt.Println(isValidSudoku(c))
	fmt.Println(isValidSudoku(b))
}
