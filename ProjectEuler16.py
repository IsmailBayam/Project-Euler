#hey, we have to work with very very big integers while solving the problem so i thought using python will be much better, here's the code

b = 2 ** 1000
num = 0
while(b != 0):
  sum = sum + num % 10
  num = num//10
print(sum)

