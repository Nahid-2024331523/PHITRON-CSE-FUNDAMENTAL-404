def double_it(n) :
    result=n*2
    print(result)
    return result

def sum(n1,n2) :
    total=n1+n2
    print(total)
    return total

a=int(input())
b=int(input())
x=double_it(a)
y=double_it(b)
z=sum(x,y)
double_it(double_it(z))