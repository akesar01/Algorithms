sum,num = map(int,input().split(" "))
# n is number of units i.e sum
# m is number of coin type
coin = list(map(int,input().split(" ")))
temp=[[0 for i in range(sum+1)] for j in range(num)]
for i in range(num):
    temp[i][0]=1

for i in range(num):
    for j in range(sum + 1):
        if(coin[i]>j):
            temp[i][j] = temp[i-1][j]
        else:
            temp[i][j] = temp[i-1][j] + temp[i][j-coin[i]]
for l in range(num):
    for k in range(sum+1):

        print(temp[l][k],end =" ")
    print()
print(temp[num-1][sum])

