package main

func main() {

	amount := 1000 * 1000

	nums := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

	for x := 0; x < 1000; x++ {
		result := make([]float32, amount)
		sum := float32(0)

		for i := 0; i < amount; i++ {
			index := i % 10
			sum += float32(nums[index])

			if index > 20 {
				sum -= float32(nums[index-20])
			}

			result[i] = sum / 20.0
		}

		//fmt.Println(result[:30])
	}
}
