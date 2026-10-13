def numbers(n1 , n2) :
    sum=n1+n2
    mult=n1*n2
    remain=n1-n2
    # return sum,mult,remain  # returns tuple
    return [sum,mult,remain]    # returns list

print(numbers(10,5))