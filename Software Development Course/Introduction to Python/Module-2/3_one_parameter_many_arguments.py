def sum_of_parameters(*numbers) :
    print(numbers)
    sum=0
    for n in numbers :
        sum+=n
    return sum

total=sum_of_parameters(10,15,20,25,30)
print('total =',total)