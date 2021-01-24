a,b = map(int, input().split())
array = []
min_array = []

for i in range(a):
    arr1 = list(map(int, input().split()))
    min_array.append(min(arr1))

print(max(min_array))