package main
 
import "fmt"

func in_array(val int, array []int) bool {
    for _, v := range array {
        if val == v {
            return true
        }   
    }

    return false
}
 
func main() {
	Xlist := []int{3, 6, 9}
    var N int
	fmt.Scanln(&N)

	for i := 1; i <= N; i++ {
		if in_array(i % 10, Xlist) || in_array(i / 10, Xlist) {
			fmt.Print("X ")
		} else {
			fmt.Printf("%d ", i)
		}
	}
	fmt.Print("\n")
}