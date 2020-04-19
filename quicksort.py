
    
def part(a,p,q):
    pivot=q
    j=p
    
    i=p-1
    while(j<=q):
        if(a[j]<a[q]):
            i +=1
            a[i],a[j] = a[j],a[i] 
        j +=1
    return i
def quicksort(a,p,q):
    if(p<q):
    
    
        mid=part(a,p,q)
        quicksort(a,p,mid-1)
        quicksort(a,mid+1,q)
    
a=[1,8,9,10,11,32]
p=0
q=len(a)-1
quicksort(a,p,q)
print(a)
    
        
    
