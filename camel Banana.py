a=3000
l=1000
s=0

while(a>l):
    N=(a/l)*2-1
    x=l//N
    s=s+x
    a=a-l

kmleft=a-s
bananas_needed=kmleft
bananas_left=a-bananas_needed
print(bananas_left)
