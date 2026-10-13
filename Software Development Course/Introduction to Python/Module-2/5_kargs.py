def identity(first , last , **addition) :
    id=f'{first} {last}'
    print(id)
    print("nationality =",addition['nationality'])      # also works for numbers
    print("religion =",addition['religion'])

identity('bashir shahrier' , 'nahid' , nationality='bangladeshi' , religion='islam')