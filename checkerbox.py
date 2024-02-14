#this program takes the width and height of the box by the user input and then prints ot he checkered pattern

width = int(input("Enter the width: "))
height = int(input("Enter the height: "))

for row in range(0 , height):
        for col in range(0, width):
           if (row % 2 == 0 and col % 2 == 0):
                print("***", end=" ")  

           elif (row % 2 == 0 and col % 2 == 1):
                print(" " ,end=" ")
            
           elif (row % 2 == 1  and col % 2 == 0):
                print(" " ,end=" ")

           elif (row % 2 == 1  and col % 2 == 1):
                print("***" ,end=" ")
        print()

    
         
    