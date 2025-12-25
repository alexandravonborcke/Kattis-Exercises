# Problem being solved: https://open.kattis.com/problems/kingarthur
d = float(input()) # Diameter of the table
w = float(input()) # Width each person needs
n = int(input()) # Amount of people

pi = 3.14159

c = d * pi # Circumference of the table
minspace = w * n # Minimum space needed

a = c - minspace

if a < 0:
    print('NO')
elif a >= 0:
    print('YES')
    
    