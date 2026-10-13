numbers=[10,20,30,40,50]

numbers.append(60)
print(numbers)

# now [10,20,30,40,50,60]
numbers.insert(2,25)
print(numbers)

# now [10,20,25,30,40,50,60]
numbers.remove(25)
print(numbers)

# now [10,20,30,40,50,60]
last=numbers.pop()
print(numbers , last)

# now [10,20,30,40,50]
ind=numbers.index(40)
print(ind)

l=[5,9,3,5,8,4,2,9,7,2,6,5,1,8,5]

five=l.count(5)
print(five)

l.sort()
print(l)

l.reverse()
print(l)