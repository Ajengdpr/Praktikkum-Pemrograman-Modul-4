nilai = int(input())

hasil = None
if (nilai >= 80) and (nilai <= 100):
    hasil = 'A'
elif (nilai >= 70) and (nilai <= 79):
    hasil = 'B'
elif (nilai >= 60) and (nilai <= 69):
    hasil = 'C'
elif (nilai >= 50) and (nilai <= 59):
    hasil = 'D'
elif (nilai >= 0) and (nilai <= 49):
    hasil = 'E'
else: 
    print ('Inputan Salah')

print ('{}'. format(hasil))