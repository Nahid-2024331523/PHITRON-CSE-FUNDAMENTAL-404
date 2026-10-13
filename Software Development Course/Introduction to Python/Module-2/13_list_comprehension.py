numbers=[68,75,42,20,21,15,35,23,36,65]
odds=[]
for num in numbers :
    if num%2==1 and num%5==0 :
        odds.append(num)
print(odds)

odd_nums=[n for n in numbers if n%2==1 if n%5==0]
print(odd_nums)

bijoy_24=[]
names=['nahid' , 'taqi' , 'jaber']
nums=[10 , 20 , 30]
for name in names :
    for num in nums :
        bijoy_24.append([name,num])
print(bijoy_24)

bh=[[name,num] for name in names for num in nums]
print(bh)