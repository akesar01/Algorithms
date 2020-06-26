# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import Counter

x = int(input())
shoe = list(map(int, input().split(" ")))
N = int(input())
dic = Counter(shoe)
profit = 0
while (N):
    N -= 1
    req, price = map(int, input().split(" "))
    if (dic[req] > 0):
        dic[req] -= 1
        profit += price
print(profit)

