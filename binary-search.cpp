// Peter Shultz
// EECS 281
// hw1.cpp

#include <vector>
#include <math.h>

bool binarySearch(const std::vector<int> &a_sorted_vector, int desired_search) {

    int first = 0;
    int last = static_cast<int>(a_sorted_vector.size() - 1);
    int middle = 0;
	
    while (first <= last) {

        middle = (first + last) / 2;
        
	if (sorted[middle] == desired_search) {
	
            return true;

	}
		
	else if (sorted[middle] > desired_search){

            last = middle - 1;

	}
        
        else {
            
            first = middle + 1;
            
        }

    }

    return false;
}

