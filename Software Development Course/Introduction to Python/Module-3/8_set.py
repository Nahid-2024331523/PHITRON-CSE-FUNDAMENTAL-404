numbers=[66,78,21,45,66,21,12,20,45,78,65,20,78]
print(numbers)
Number_set=set(numbers)
print(Number_set)
Number_set.add(87)
print(Number_set)
Number_set.remove(20)
print(Number_set)
print(len(Number_set))

if 21 in Number_set :
    print('exists')

for i in Number_set :
    print(i)

