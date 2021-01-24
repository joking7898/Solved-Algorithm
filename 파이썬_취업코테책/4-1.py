n = int(input())
input_move = input()
move_arr = input_move.split()

row = 1
col = 1

move = ['L', 'R', 'U', 'D']
move_x = [0, 0, -1, 1]
move_y = [-1, 1, 0, 0]

for i in move_arr:
    # print(i)
    change = move.index(i)

    # 실수한 부분 N의 범위를 넘어설 경우도 조건으로 걸어주어야 함.
    if (row + move_x[change]) == 0 or (col + move_y[change]) == 0 or (row + move_x[change]) > n or (col + move_y[change]) > n:
        continue
    row = row + move_x[change]
    col = col + move_y[change]

print(row, col)