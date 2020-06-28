#數字運算

#整數除法
x=10//8
print(x)
#小數除法
x=10/8
print(x)
#次方運算
x=2**3
print(x)
#開根號
x=2**0.5
print(x)

#----------------------------------------#

#字串運算

#字串可用雙引號 " ，也可用單引號 '
x="Hello World"
y='Haha'
print(x,y)
#跳脫符號 \，可幫助顯示"
x="Hell\"o\""
print(x)
#字串串接可用加號 + 和空白鍵
x="Hello"+"World"
y="Hello" "World"
print(x)
print(y)
#換行 \n
x="Hello\nWorld"
print(x)
#換行 使用三個單引號或雙引號
x="""Sunny

Day"""
print(x)
#重複字串 使用*,先乘除後加減(一定要用加號 串接文字)
x="Hello"*3+"World"
print(x)
#字串會對內部的字元編號(索引),從0開始算起
x="Hello"
print(x[1])
print(x[1:4]) #從編號1印到編號4
print(x[:4]) #從編號0印到編號4
print(x[2:]) #從編號2印到編號5