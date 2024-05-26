import random

class Exam:
    
    def __init__(self,sub):
        self.sub = sub
        
    def attend_to_exam(self):
        self.attend = input()
        if self.attend == "YES":
            print(self.sub, self.attend, self.get_marks())
        else:
            print(self.sub, "Fail")
        
    def get_marks(self):
        self.marks = random.randint(70,100)
        return self.marks

phy = Exam("Physics")
phy.attend_to_exam()

chem = Exam("Chemistry")
chem.attend_to_exam()
