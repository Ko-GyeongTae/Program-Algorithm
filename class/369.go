package main

import "fmt"

func recursive(x int) int {
    if x < 1 {
		return 0
	}

    isTrue := 0;
    if x % 10 == 3 || x % 10 == 6 || x % 10 == 9 {
		isTrue=1	
	}

    return recursive(x/10) + isTrue;
}
 
func main() {
    var N int
	cnt := 0
	fmt.Scanln(&N)

	for i := 1; i <= N; i++ {
		cnt += recursive(i)
	}
	fmt.Print(cnt + '\n')
}
