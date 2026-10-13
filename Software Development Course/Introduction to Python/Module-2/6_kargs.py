def identity(first , last , **addition) :
    id=f'name : {first} {last}'
    print(id)
    for key,value in addition.items() :
        print(f'{key} : {value}')

identity('bashir shahrier' , 'nahid' , nationality='bangladeshi' , religion='islam' , work='sudent')