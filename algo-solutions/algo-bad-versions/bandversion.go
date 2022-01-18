/** 
 * Forward declaration of isBadVersion API.
 * @param   version   your guess about first bad version
 * @return 	 	      true if current version is bad 
 *			          false if current version is good
 * func isBadVersion(version int) bool;
 */

func firstBadVersion(n int) int {
    start := 1
    end := n
    
    for start <= end {
        mid := start + (end-start)/2; 
        if isBadVersion(mid) == true {
            if(isBadVersion(start)) {
                return start
            }
            end = mid
        } else {
            start = mid+1
        }
      
    }
    return start
}

