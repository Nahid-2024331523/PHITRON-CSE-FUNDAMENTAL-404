balance=3000

def buy_items(item , price) :
    global balance
    print(f'balance before buying : {balance}')
    balance-=price
    print(f'balance after buying a {item} : {balance}')

buy_items('keyboard' , 2300)