import sys
import math




sum = 0
for i in range(10000):
    temp = sys.stdin.readline()
    if temp == '':
        break
    temp = int(temp)
    temp = math.floor(temp/3)
    temp = temp-2
    sum += temp


print(sum)
