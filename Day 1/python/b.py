import sys
import math
from checkFuel import checkNeededFuel



def main():
    totalSum = 0
    santaMagic = 8
    for i in range(9999999):
        temp = sys.stdin.readline()
        sum = 0
        if temp == "":
            break
        value = checkNeededFuel(temp)
        sum += value
        while value >= santaMagic:
            value = checkNeededFuel(value)
            sum += value

        totalSum += sum

    print(totalSum)
main()
    

        
        


    

