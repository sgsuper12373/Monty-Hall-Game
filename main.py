#Verifying Monty Hall's Theorem

import random
a=random.randing(1,3)
guess=int(input('enter room number you want to bet'))

#Monties unrevealing door
doors=[1,2,3]
doors.remove(guess)





#giving second chance to recheack doors
secondChance=input("Do you want to swap dooers? y/n")

#swapping doors if agreed to swap
if secondChance=='y' or secondChance=="Y":
    guess=doors[(doors.index(guess)+1)%2]

if guess==a:
    print("you Won!!")
else : print("Your lost, loser!!")
