Pada coding ini, binary searching adalah dengan membagi dua elemen larik pada elemen tengah.
Elemen tengah adalah elemen dengan indeks tengah = ( awal + akkhir ) / 2 .
(elemen tengah , data[tengah] , membagi larik menjadi dua bagian ,yaitu bagian kiri dan bagian kanan )
Periksa apakah data[tengah] = cari .Jika data[tengah] = cari maka pencarian selesai ,sebab cari sudah ditemukan dan syarat penrulangan dari WHILE nya sudah tidak terpenuhi .Tetapi , jika tidak ditemukan ,maka harus ditentukan apakah pencarian akan dilakukan di larik bagian kiri atau di bagian kanan . Jika data[tengah] < cari . maka pencarian akan dilakukan dibagian kiri ,sebalik nya jika data[tengah] > cari , maka pencarian akan dilakukan dari sebelah kanan .
Ulangi langkah 1 hingga cari ditemukan atau i > n atau larik sudah nol .
