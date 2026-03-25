# PROB - 1 SUM OF N NUM

# n = int(input("enter the number from sum :"))

# sum = 0
# for i in range(1,n+1):
#     sum += i
 
# print("total sum is :",sum)

# PROB - 2 FACTORIAL OF N NUM

# n = int(input("enter the num :"))

# fact = 1
# for i in range(1,n+1):
#     fact *= i
   
# print("factorial will be :",fact)    

# PROB - 3 FUNCTION

# def alok(a, b, c):
#     total = a + b + c
#     avg = total / 3
#     print("Avg of three num:", avg)

# alok(10, 12, 14)

# PROB - 4 ODD EVEN USING FUNCTION

# def check(a):
#     if(a % 2 == 0):
#         print("This is even number")
#     else:
#         print("This is odd number")

# check (21)       

# PROB - 5 CLASSES AND METHODS

# class Student :
#     def __init__(self,name,marks):
#         self.name = name
#         self.marks = marks

#     def find_avg (self) :
#         sum = 0
#         for val in self.marks:
#             sum += val
#         print("Hello",self.name, "your avg score is",sum/3)   
       
# S1 = Student("ALOK JHA",[97,98,99]) 
# S1.find_avg()      


class college:

    def __init__(self,name,roll_no,marks):
        self.name = name
        self.roll_no = roll_no
        self.marks = marks

    def student(self):

        print("Hii",self.name,
              "your roll_no is:",self.roll_no,
              "\nand your score is :",self.marks)

details = college("ALOK JHA",46,99)   
details.student()
    
