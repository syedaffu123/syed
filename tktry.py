import random
from tkinter import *
from tkinter import messagebox 
from tkinter.ttk import *

window = Tk()
 
window.title("Welcome to Hand Cricket Game")
 
window.geometry('350x200')
app = Frame(window)
app.grid()
pturn=True

def toss():
	t=random.choice(["Head","Tail"])
	s=selected.get()

	if((t=="Head" and s == 1) or (t=="Tail" and s == 2) ):
		messagebox.showinfo( 'toss',t+": Player starts batting")
	else:
		pturn=False
		messagebox.showinfo( 'toss',t+': computer starts batting')
	for child in app.winfo_children():
		child.destroy()
		print("here")
selected = IntVar()

lbl1 = Label(window, text="select")

 
rad1 = Radiobutton(window,text='Head', value=1,variable=selected)
 
rad2 = Radiobutton(window,text='Tail', value=2,variable=selected)

 
btn = Button(window, text="Toss", command=toss)
 
btn.grid(column=1, row=1)
 

lbl1.grid(column=0 , row=0)
 
rad1.grid(column=1, row=0)
 
rad2.grid(column=2, row=0)




counter=0#initialising counter value 

computer=0# initialising the  player's score
score=0#initialising the computer's score 


while True:
	if counter==2:#to check if the counter value is 2
		break
	
	if(pturn):
		# to play continuosly until the condition is satisfied
		while True:
			#player wins the toss and starts playing
				c=int(input("enter value : "))#to generate player number
				r=random.randint(1,6)#to show computer number randomly
				score=score+c#player score is calculated
				print(" player score is",score)#to print player's score
				print("computer hits",r)#to print computer's number
				if(computer!=0):
						if(score>computer):#o check if the player's score is greater than computer's
							print("player wins",score)#to print the score
							exit()#to exit 
				if(c==r):#to check if the player's number and computer's number is same
					print("player stops playing")#to print player stops playing

					score=score-c
					print(score)#to print score
					pturn=False#to change the condition so computer starts playing 
					counter=counter+1#to increment counter after player plays 
					break	
				
				

			
		else:
			while True:
				r1=random.randint(1,6)#generates  computer's value
				a1=int(input("enter value"))#to generate player's value
				computer=computer+r1#to calculate computer's score
				print("computer hits",r1)#to print computer's value
				print("computer score is",computer)#to print computer's score 
				print("player hits",a1)#tp print player's value
				if(score!=0):
						if(computer>score):# check if computer's score is greater than player's
							print("computer wins",computer)# to print computer's score
							exit()# to exit

				if(r1==a1):#checking if player's number and computer's number is equal
					print("computer stops playing")# prints computer stops playing 
					computer=computer-r1
					print(computer)#prints computer score 
					pturn=True#to change the condition so player can play
					counter=counter+1#to increment the counter after computer plays
					break
				

	
if(score>computer):# check if player's score is greater than computer's if number put by both is equal
	print("player wins the game",score)#to print the player wins and his score
elif(computer>score):#check if computer's score is greater than player's if number put by both is equal
	print("computer wins the game",computer)#to print the computer wins and his score
else:#if both the scores are equal
	print("it is a tie")#to print if its a tie 		
		
		



window.mainloop()