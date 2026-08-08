L = [10,20,30,40]
L.append(20)
print(L)
val = 0
for i in L:
    val = i^val    
print(val)   