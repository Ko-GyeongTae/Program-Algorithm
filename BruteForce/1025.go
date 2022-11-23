package main

import (
	"fmt"
	"math"
)

var N int
var M int
var temp int
var arr [10][10]int
var result int = -1

func isSquare(arg int) bool {
	root := int(math.Sqrt(float64(arg)))
	return root * root == arg
}

func main() {
	fmt.Scan(&N, &M)

	// input table
	for i := 0; i < N; i++ {
		fmt.Scan(&temp)
		for j := 0; j < M; j++ {
			arr[i + 1][j + 1] = temp % int(math.Pow(10, float64(M - j)))
    }
	}

	// search
	for i := 0; i < N; i++ { // 행 시작
		for j := 0; j < M; j++ { // 열 시작
			for k := -N; k < N; k++ {  // 행 방향
				for l := -M; l < M; l++ { // 열 방향
					if k == 0 && l == 0 {
						continue
					}
					x := k
					y := l
					num := 0
					for 0 <= x && x < N && 0 <= y && y < M {
						num *= 10
						num += arr[y][x]
						x += k
						y += l
						fmt.Println(k, l, num)
						if isSquare(num) {
							result = int(math.Max(float64(result), float64(num)))
						}
					}
				}
			}
		}
	}

	fmt.Println(result)
}