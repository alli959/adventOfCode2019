import sys
import math
from checkFuel import checkNeededFuel



def main():
    sum = 0
    for i in range(100000):
        temp = sys.stdin.readline()
        if temp == '':
            print("here")
            break
        value = checkNeededFuel(temp)
        sum += value
    print(sum)
main()
