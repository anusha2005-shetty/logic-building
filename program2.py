my_list=[7,5,6,3,2,1]
lower=my_list[0]
for num in my_list:
    if num<lower:
        lower=num
print("lowest number",lower)
