class daftar_buku:
    jumlah = 0
    ngomong1 = 'lol'
    def __init__(self,nama,nomor,kategori):
        self.nama = nama
        self.nomor = nomor
        self.kategori = kategori
        self.penulis =''
        daftar_buku.jumlah = daftar_buku.jumlah + 1
    def __str__(self):
        return ("nama buku : %s , nomor : %d , kategori : %s , penulis : %s" % (self.nama,self.nomor,self.kategori,self.penulis))
    def ngomong(self):
        print("nama aku %s"%self.nama)
    def talking(self):
        print("talking")

buku = []

doraemon = daftar_buku('doraemon',12,'lucu')
doraemon.penulis = "nyoman"
buku.append(doraemon)

doraemon.ngomong()

buku.append(daftar_buku('komik',20,'horror'))

print("jumlah buku pake fungsi len : %d"%len(buku))
print("jumlah buku pake dari var jumlah : %d"%daftar_buku.jumlah)
print daftar_buku.ngomong1
doraemon.talking()
