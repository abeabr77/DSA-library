list = [9, 1, 8, 2, 3, 10, 7, 5]
print(list)

def insertionSort(list):
    for i in range(1, len(list)): # Iterate thru the list starting from the second index
        temp = list[i]  # Holds the number at i temporarily for swapping
        j = i - 1       # Sets j as the index of the number before the current (i) for comparison

        while j >= 0 and list[j] > temp:    
            list[j + 1] = list[j]  # Shifts number at index j to the right 
            j -= 1      # Moves j to the previous index
        
        list[j + 1] = temp  # Places the temp. number in its correct spot

    print(list)

insertionSort(list)

# Best time complexity case is O(n) if the list is already sorted, the while loop wouldn't run
# Worst/Average time complexity is O(n^2) 