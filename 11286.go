package main

import (
	"fmt"
)

func main() {
	var x int
	var N int
	var zeroCnt int = 0
	var arr [100000][2]int

	fmt.Scanln(&N)


	for i := 0; i < N; i++ {
		arr[i] = 0
	}

	for i := 0; i < N; i++ {
		fmt.Scanln(&x)
		
		if x == 0 {
			zeroCnt++
		}

		if x < 0 {
			x *= -1
		}

		arr[x] += 1
	}

	for i := 0; i < zeroCnt; i++ {
		if arr[i] != 0 {
			fmt.Println(i)
		}
	}	
}