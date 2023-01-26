def insertionSort(a):

    n = len(a)

    for i in range(1 , n):
        curr = a[i]
        j = i-1
        
        while j > -1 and curr < a[j]:
            a[j + 1] = a[j]
            j = j - 1

        a[j + 1] = current


a = [94, 44, 35, 2, 22, 12, 99]
insertionSort(a)
print("Sorted array : ")
for i in a:
    print(i)
