#Verifying Monty Hall's Theorem

import random
prize=random.randint(1,3)
guess=int(input('enter Door number you want to bet : '))

#Monty Deciding which Door to reveal
doors=[1,2,3]
doors.remove(guess)
if prize!=doors[0] :
    print("oops there is nothing behind ",doors[0], " Door ")
    doors.pop(0)
    
else :
    print("oops there is nothing behind this door",doors[1]," Door ") 
    doors.pop(1)
    

#Monty asking to swap doors
choice=input("Do you Want to change choice of Door? Y/N  : ")

#swapping doors if agreed to swap
if choice=='y' or choice=="Y":
    guess=doors[0]

if guess==prize:
    print("you Won!!")
else : print("Your lost, loser!!")
