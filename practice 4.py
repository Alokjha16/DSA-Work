# PROB - 1 PRINT 1-100 OR 100-1

# i = 1
# while i<=10 :
#     print("MY name is ALOK",i)
#     i += 1

#  PROB - 2 Multiplication of N 

# n = int(input("Enter the Table :"))
# i = 1
# while i<= 10:
#     print(n*i) 
#     i += 1

# PROB - 3 SORTING

# arr = [22,4,55,75,23,87,54,9,12,97,455]
# arr.sort(reverse = True)
# print(arr)


# PROB - 4 SEARCHING

list = (1,4,9,16,25,36,49,64,81,100)

n = int(input("Enter the value to Search :"))

i = 0
while i<len(list):
    if(list[i] == n):
        print("FOUND At INDEX :",i)
    i += 1
    