a = int(input())
b = int(input())
c = int(input())

if a < b and a < c:
    print ('%.d %.d %.d' % (a, b, c))
elif a < c and c < b:
    print ('%.d %.d %.d' % (a, c, b))
elif b < a and a < c:
    print ('%.d %.d %.d' % (b, a, c))  
elif b < c and c < a:
    print ('%.d %.d %.d' % (b, c, a))
elif c < a and a < b:
    print ('%.d %.d %.d' % (c, a, b))    
else:
    print ('%.d %.d %.d' % (c, b, a))