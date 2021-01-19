/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * func guess(num int) int;
 */

func guessNumber(n int) int {
	left, right := 1, n

	for left <= right {
		mid := (left + right) >> 1
		if guess(mid) == 0 {
			return mid
		} else if guess(mid) == 1 {
			left = mid + 1
		} else {
			right = mid - 1
		}
	}
	return 0
}