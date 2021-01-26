x = str(input())
a = ord(x[0])-96
b = int(x[1])
count = 0
movexy = [[-2, -1],[-1, -2],[1, -2],[2, -1],[-2, 1],[-1,2],[1,2],[2,1]]

for i in range(8):
    if (a + movexy[i][0] < 1) or (a + movexy[i][0] > 8) or (b + movexy[i][1] < 1) or (b + movexy[i][1] > 8):
        continue
    else:
        count += 1
print(count)