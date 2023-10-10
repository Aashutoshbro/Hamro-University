astr="hello BOB"
try:
    istr=int(astr)
except:
    istr=-1
print("First", istr)

astr="123"
try:
    istr=int(astr)
except:
    istr=-1
print("second", istr)

"Simple try/except block"
num1=input("enter the number: ")
try:
    num2=int(num1)
except:
    num2=-1
if num2>0:
    print("Nice Work")
else:
    print("Not a number")

