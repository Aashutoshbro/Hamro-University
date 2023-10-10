'Sorting the numbers'

numbers=[5,4,1,8,2,5,3,7,6,1]
numbers.sort()
print(numbers)

'sorting numbers in descending order'
numbers=[5,4,1,8,2,5,3,7,6,1]
numbers.sort()
numbers.reverse()
print(numbers)

'A program to remove the duplicates && sorting them in ascending order'
numbers=[5,4,1,8,2,6, 5,3,7,6,1]
unique=[]
for number in numbers:
    if number not in unique:
        unique.append(number)
        unique.sort()

print(unique)