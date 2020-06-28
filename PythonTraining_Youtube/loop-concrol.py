n=input("輸入一個正整數: ")
n=int(n)
for i in range(n):
    if i*i==n:
        print("整數平方根",i)
        break #用break強制結束迴圈時，不會執行else
else:
    print("沒有整數平方根")