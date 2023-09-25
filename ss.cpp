Integer a, b, c, d, r
Set a = 15,b=12,d=0,r=0
if((a+b)/3 > 6)
    for(each c from 0 to 3)
        d=d+c+a
        goto lable
    end for
lable: if((r MOD 2) EQUALS 0)
Print "try"
else
Print "don't try"
end if
else
Print "outside"
end if 
print r
