det = int(input())
if det<=86400:
    jam = det //3600
    sisa = det %3600
    menit = sisa //60
    detik = sisa %60
    print ('%.2d:%.2d:%.2d' % (jam, menit, detik))
else : 
    hari = det //86400
    sisa = det %86400
    jam = sisa //3600
    ssisa = sisa %3600
    menit = ssisa //60
    detik = ssisa%60
    print ('%d hari %.2d:%.2d:%.2d' % (hari, jam, menit, detik))