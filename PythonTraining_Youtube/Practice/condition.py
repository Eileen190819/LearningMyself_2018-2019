#判斷式
x=int(input("請輸入數字:"))
if x>100:
    print("大於100")
elif x<100:
    print("小於100")


#四則運算
x=int(input("請輸入數字一"))
y=int(input("請輸入數字二"))
op=input("請輸入運算: +,-,*,/ :")
if op=='+':
    print(x+y)
elif op=='-':
    print(x-y)
elif op=='*':
    print(x*y)
else:
    print(x/y)