array=[1,2,3,4,5,6]
def find_odd(array):
    odd_number=[]
    for num in array:
        if num%2!=0:
            odd_number.append(num)
    return odd_number
odd_number=find_odd(array)
print("odd number",odd_number)
