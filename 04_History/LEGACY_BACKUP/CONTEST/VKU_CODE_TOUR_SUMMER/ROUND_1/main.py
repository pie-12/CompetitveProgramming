s = "41x + 11y + 138z = 30973 , 138x - 73y + 146z = 52841 , 66x + 51y - 152z = -27277"
s = s.replace(' ','')
s = s.split(',')
a = []
for i in s:
    i = i.split('x')
    a.append(int(i[0]))
    i = i[1].split('y')
    a.append(int(i[0]))
    i = i[1].split('z')
    a.append(int(i[0]))
    i = i[1].split('=')
    a.append(int(i[1]))

D = a[0]*a[5]*a[10] + a[1]*a[6]*a[8] + a[2]*a[4]*a[9] - a[2]*a[5]*a[8] - a[0]*a[6]*a[9] - a[1]*a[4]*a[10]
D1 = a[3]*a[5]*a[10] + a[1]*a[6]*a[11] + a[7]*a[9]*a[2] - a[2]*a[5]*a[11] - a[1]*a[7]*a[10] - a[6]*a[9]*a[3]
D2 = a[0]*a[7]*a[10] + a[3]*a[6]*a[8] + a[2]*a[4]*a[11] - a[2]*a[7]*a[8] - a[0]*a[6]*a[11] - a[3]*a[4]*a[10]
D3 = a[0]*a[5]*a[11] + a[1]*a[7]*a[8] + a[3]*a[4]*a[9] - a[3]*a[5]*a[8] - a[0]*a[7]*a[9] - a[1]*a[4]*a[11]
x = D1/D
y = D2/D
z = D3/D

print (max(x,y,z) * min(x,y,z))
#test



