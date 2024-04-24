import pyautogui
import time 


n = int(input())
time.sleep(3)

# s = n-1
k = 1

for i in range(1,n+1):
    for j in range(1,k+1):
        pyautogui.write("#",interval=0.25)
    # for j in range(1,s+1):
    #     print(" ",end="")
    # s -= 1
    k += 1
    # print("\n",end="")
    pyautogui.press("enter")

#
##
###
####
#####
