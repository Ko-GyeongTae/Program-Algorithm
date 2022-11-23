package algorithm

import "fmt"

func in_array(val int) bool {
	array := []int{3, 6, 9}
    for _, v := range array {
        if val == v {
            return true
        }   
    }

    return false
}

func sliceAndCount(val int) int {
	var arr []int
	i := 0
	count := 0

	if val < 10 {
		if in_array(val) {
			return 1
		} else {
			return 0
		}
	}

	for val >= 10 {
		i += 1
		arr = append(arr, val % 10)
		val = val / 10
	}
	
	for _, value := range arr {
		fmt.Println(value)
		if in_array(value) {
			count += 1
		}
	}
	return count
} 
 
func main() {
    var N int
	count := 0
	fmt.Scanln(&N)

	for i := 1; i <= N; i++ {
		count += sliceAndCount(i)
	}

	println(count)
}