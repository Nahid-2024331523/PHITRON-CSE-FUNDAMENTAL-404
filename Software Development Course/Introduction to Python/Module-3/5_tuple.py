name='nahid','taqi','jaber','mahi','arafat','jitu'
# name=('nahid','taqi','jaber','mahi','arafat','jitu')
print(name)
n=len(name)
print(name[2])
print(name[-1])
print(name[0:n])    # name[:n] name[0:]
print(name[::-1])

if 'arafat' in name :
    print('found')

for nm in name :
    print(nm)

N=tuple('nahid')
print(N)