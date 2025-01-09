nums = [1, 3, 6, 7, 9, 12, 15, 21]
target = 12

def binary_search(arr, target):
    low = 0
    high = len(arr) - 1

    while high >= low:
        mid = (high + low) // 2 # middle index
        if arr[mid] == target:
            return mid
        if arr[mid] < target:  # Search the right half
            low = mid + 1
        else:                  # Search the left half
            high = mid - 1
    
    return -1

index = binary_search(nums, target)
print(index)

# Time complexity of binary search is typically O(log n). Best case O(1) if target is found at the middle of index
# Array must be sorted