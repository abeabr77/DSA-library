nums = [1, 3, 6, 7, 9, 12, 15, 21]
target = 6

def linearSearch(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1
        
index = linearSearch(nums, target)
print(index)

# Time complexity of linear search is typically O(n) since it iterates through the array
# Best case is O(1) if the target is found at the first index