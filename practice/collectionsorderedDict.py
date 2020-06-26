from collections import OrderedDict
N = int(input())
ordered_dict = OrderedDict()
check =[]
while(N):
    N-=1
    item_name,space,price=input().rpartition(" ")
    if(item_name not in check):
        ordered_dict[item_name] = int(price)
        check.append(item_name)
    else:
        ordered_dict[item_name] +=int(price)
for item_name,price in ordered_dict.items():
    print(item_name,price)

