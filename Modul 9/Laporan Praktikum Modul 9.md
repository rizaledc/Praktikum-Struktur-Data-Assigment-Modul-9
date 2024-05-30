# <h1 align="center">Laporan Praktikum Modul Stack dan Queue</h1>

<p align="center">Rizal Wahyu Pratama</p>
<p align="center">2311110029</p>
<p align="center">S1SD-04-B</p>

## Tujuan Praktikum

 a. Mampumemahami konsep rekursif pada struktur data dan algoritma
 b. Mampumengimplementasikan rekursif pada kode program
 c. Mahasiswa mampu menerapkan Hash Code kedalam pemrograman
 
## Dasar Teori

### A. Algoritma Rekursif

Algoritma rekursif merupakan metode yang baik serta efektif diekspresikan sebagai rangkaian terbatas untuk melakukan suatu perintah. Algoritma Rekursif terdiri dari dua kata yaitu algoritma dan rekursif. Dimana algoritma menurut Gun Gun Maulana merupakan metode efektif yang diekspresikan sebagai rangkaian terbatas. Algoritma juga merupakan kumpulan perintah untuk menyelesaikan masalah. Menurut Wilis Kaswidjanti, S.SI., M.Kom Rekursif merupakan alat untuk memecahkan masalah dalam suatu fungsi atau procedure yang memanggil dirinya sendiri. Logika rekursif memiliki sebuah parameter yang dapat berguna untuk memaggil dirinya sendiri. Logika ini digunakan untuk menggantikan proses iterasi (perulangan). Definisi menurut Niclaus Wirth : “ An object is said be recursive if it partially consist or is defines in terms of it self”

Perulangan dapat diubah menjadi kode rekursif agar lebih singkat dalam proses kompilasi dan interpretasi. Rekursi dapat diterapkan dalam masalah pengurutan, pencarian, serta penjelajahan yang sering kali diselesaikan dengan kode rekursif sederhana. 

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/Gambaran%20Rekursif%20Berjalan.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 1. Ilustrasi Fungsi Rekursif Berjalan
</p> 

Pada ilustrasi di atas, terdapat 5 kali print dimulai dari perulangan pertama hingga perulangan ke 5. Perulangan ini tentunya menggunakan sebuah parameter seperti n. Selain itu, terdapat dua jenis rekursif yang harus diketahui sebagai berikut:

- Rekursif Langsung
  Fungsi memanggil dirinya sendiri secara eksplisit atau secara langsung.
- Rekursif Tidak Langsung
  Fungsi yang memiliki serangkaian pemanggilan fungsi di dalamnya, tetapi tidak ada pemanggilan langsung ke fungsi itu sendiri.

Berikut contohnya:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/Gambaran%20Rekursif%20Langsung%20dan%20Tidak.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 2. Gambaran Code Rekursi
</p> 

Adapun kelebihan serta kekurangan dalam menggunakan kode rekursif sebagai berikut:

  A. Kelebihan
  1. Memberikan kemudahan dalam kode sehingga mudah dimengerti.
  2. Sangat efektif untuk masalah yang dapat dibagi menjadi sub-bab sub-bab yang lebih kecil.
  3. Tampilan kode yang lebih baik dan elegan.
     
  B. Kekurangan
  
  1. Rekursif menambah overhead pada call stack.
  2. Implementasi kurang efisien dalam waktu seperti overhead pemanggilan fungsi.
  3. Potensi overflow dan bug.
     
### B. Hash Table

Hash table merupakan bagian dari struktur data yang dapat digunakan untuk menyimpan nilai dengan kunci dengan efisiensi tinggi dalam pencarian, penyisipan, dan penghapusan data. Hash table biasanya terdiri dari dua komponen utama diantaranya array/vektor dan fungsi hash. Teknik hash disebut dengan hashing yang digunakan untuk mengubah rentang nilai kunci menjadi rentang indeks array.

Dalam hash table terdapat bucket yang merupakan tempat array untuk menyimpan data dalam bentuk slot-slot. Dalam hashing dapat menghasilkan nilai unik dari setiap datanya yang dapat digunakan untuk indeks dalam array. Sehingga, hash table memungkinkan pencarian data dengan waktu konstan (O(1)) dalam kasus terbaik.

Sistem hash table bekerja dengan mengambil inputan kunci lalu memetakannya ke nilai indeks menggunakan fungsi hash. Data dapat disimpan pada posisi indeks array yang dihasilkan oleh fungsi hash. Fungsi hash mengambil kunci dan mengubahnya menjadi hash code, yaitu bilangan bulat yang kemudian digunakan sebagai indeks dalam array. Jika terjadi tabrakan (collision), di mana dua kunci memiliki indeks yang sama, hash table mengatasi ini dengan berbagai metode seperti chaining (menggunakan linked list untuk setiap indeks) atau open addressing (mencari indeks kosong berikutnya dalam array). Hash table banyak digunakan dalam implementasi struktur data seperti set dan map di berbagai bahasa pemrograman karena efisiensinya yang tinggi dalam menangani sejumlah besar data.

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/Gambaran%20Hash%20Table.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 3. Gambaran Hash Table
</p> 

Pada gambar di atas dapat kita pahami bahwa fungsi hash membuat pemetaan antara kunci dan nilai. Hasil dari hashing disebut sebagai nilai hash yang akan direpresentasikan dari string karakter asli tetapi biasanya lebih kecil dibandingkan dengan aslinya.

Operasi pada hash table meliputi tiga operasi utama: penyisipan (insertion), pencarian (search), dan penghapusan (deletion). Berikut adalah penjelasan masing-masing operasi:

1. Penyisipan (Insertion)
   - Proses penyisipan dimulai dengan mengambil kunci dari pasangan kunci-nilai.
   - Kunci tersebut kemudian diproses oleh fungsi hash untuk menghasilkan indeks dalam array.
   - Jika slot pada indeks tersebut kosong, nilai disisipkan di sana.
   - Jika slot sudah terisi (terjadi tabrakan), metode penanganan tabrakan seperti chaining (menggunakan linked list) atau open addressing (mencari slot kosong berikutnya) digunakan untuk menyimpan nilai tersebut.

2. Pencarian (Search)
   - Untuk mencari nilai berdasarkan kunci, fungsi hash digunakan untuk menghitung indeks dari kunci tersebut.
   - Array diakses pada indeks yang dihasilkan. 
   - Jika kunci yang diinginkan ada di slot tersebut, nilainya dikembalikan.
   - Jika terjadi tabrakan, metode penanganan tabrakan digunakan untuk mencari kunci yang benar.
   - Proses pencarian biasanya sangat cepat, dengan kompleksitas rata-rata O(1).

3. Penghapusan (Deletion)
   - Penghapusan dimulai dengan menghitung indeks dari kunci menggunakan fungsi hash.
   - Indeks tersebut diakses dalam array.
   - Jika kunci ditemukan pada indeks tersebut, nilai dihapus.
   - Jika terjadi tabrakan, metode penanganan tabrakan digunakan untuk menemukan dan menghapus kunci yang benar.
   - Setelah penghapusan, beberapa metode mungkin memerlukan penanganan tambahan untuk menjaga integritas struktur data.

Secara umum, efisiensi hash table bergantung pada kualitas fungsi hash dan metode penanganan tabrakan yang digunakan. Idealnya, fungsi hash harus mendistribusikan kunci secara merata ke seluruh array untuk meminimalkan tabrakan dan mempertahankan performa yang optimal.

Collision Resolution

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/Resolution.png" alt="Alt Text">
</p> 
<p align="center">
 Gambar 4. Collision Resolution Technique
</p> 

Collision merupakan keterbatasan hash table ketika dua angka dimasukkan ke dalam fungsi hash yang menghasilkan nilai yang sama. Cara menyelesaikannya sebagai berikut:

1. Open Hashing (Chaining)

Metode open hashing, juga dikenal sebagai separate chaining, adalah salah satu teknik penanganan tabrakan dalam hash table di mana setiap slot dalam array menyimpan daftar terhubung (linked list) dari semua elemen yang memiliki nilai hash yang sama. Ketika terjadi tabrakan, elemen baru ditambahkan ke akhir daftar terhubung di slot yang sesuai. Proses penyisipan, pencarian, dan penghapusan elemen dalam metode ini melibatkan penanganan daftar terhubung tersebut. Penyisipan dilakukan dengan menambahkan elemen baru ke dalam daftar, pencarian dilakukan dengan menelusuri daftar untuk menemukan elemen dengan kunci yang diinginkan, dan penghapusan dilakukan dengan menghapus elemen dari daftar. Metode open hashing mengelola tabrakan dengan cara yang efisien, karena daftar terhubung memungkinkan penambahan elemen baru tanpa memerlukan pencarian slot kosong berikutnya dalam array. Selain itu, metode ini juga menghindari masalah clustering yang sering terjadi pada metode open addressing, sehingga performa hash table dapat tetap stabil meskipun beban (load factor) tinggi. Namun, performa metode ini juga bergantung pada panjang rata-rata dari daftar terhubung; semakin panjang daftar, semakin tinggi kompleksitas operasinya.

2. Closed Hashing

Closed hashing, juga dikenal sebagai open addressing, adalah metode penanganan tabrakan dalam hash table yang tidak menggunakan struktur data tambahan seperti linked list. Sebaliknya, elemen-elemen yang bertabrakan ditempatkan langsung di slot lain dalam array berdasarkan aturan tertentu. Berikut adalah beberapa penjabaran mengenai closed hashing:

1. Linear Probing
   - Jika terjadi tabrakan, elemen baru ditempatkan di slot berikutnya yang kosong dalam array.
   - Pencarian dan penghapusan juga mengikuti pola yang sama: mulai dari slot yang dihitung oleh fungsi hash, kemudian memeriksa slot berikutnya satu per satu hingga elemen ditemukan atau slot kosong terdeteksi.
   - Kelebihan dari linear probing adalah kesederhanaannya, namun dapat menyebabkan clustering, yaitu ketika elemen-elemen bertumpuk dalam satu area array, sehingga mengurangi efisiensi pencarian.

2. Quadratic Probing
   - Untuk mengurangi clustering yang terjadi pada linear probing, quadratic probing menggunakan kuadrat dari indeks pergeseran untuk menentukan slot berikutnya (misalnya, \(i^2\) untuk iterasi ke-i).
   - Dengan demikian, jika terjadi tabrakan, elemen baru ditempatkan pada slot berikutnya yang dihitung sebagai \((hash + i^2) \% ukuran\_array\).
   - Quadratic probing mengurangi clustering primer, tetapi masih bisa mengalami clustering sekunder dan memerlukan lebih banyak perhitungan dibandingkan linear probing.

3. Double Hashing
   - Double hashing menggunakan dua fungsi hash berbeda untuk menentukan posisi slot berikutnya saat terjadi tabrakan.
   - Jika slot yang dihitung oleh fungsi hash pertama sudah terisi, fungsi hash kedua digunakan untuk menentukan langkah pergeseran berikutnya.
   - Sebagai contoh, jika terjadi tabrakan, elemen baru ditempatkan pada slot yang dihitung sebagai \((hash1 + i * hash2) \% ukuran\_array\).
   - Double hashing cenderung lebih kompleks namun memberikan distribusi yang lebih baik dan mengurangi masalah clustering yang ada pada linear dan quadratic probing.

### 1. Guided 1

```C++
#include<iostream>
using namespace std;

// Code ini berfungsi untuk melakukan hitung mundur
// dari angka yang diinputkan
void countdown(int n) {
    if (n == 0) {
        return; // Hanya perlu 'return;' karena fungsi ini bertipe void
    }
    cout << n << " "; // Menambahkan spasi untuk pemisah antar angka
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan inputnya
    cout << endl;
    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include<iostream>
using namespace std;
```
- #include<iostream>: Mengimpor library standar input-output di C++ yang digunakan untuk operasi input dan output.
- using namespace std;: Memungkinkan kita menggunakan elemen-elemen dalam namespace std (standard) tanpa perlu menuliskan std:: sebelum setiap fungsi atau objek yang berasal dari library standar.

#### Bagian 2

```C++
void countdown(int n) {
    if (n == 0) {
        return; // Hanya perlu 'return;' karena fungsi ini bertipe void
    }
    cout << n << " "; // Menambahkan spasi untuk pemisah antar angka
    countdown(n - 1);
}
```
- Fungsi countdown adalah fungsi rekursif yang bertipe void (tidak mengembalikan nilai).
Parameter n adalah angka yang akan dihitung mundur.
- if (n == 0): Basis rekursi, jika n sama dengan 0, fungsi akan berhenti memanggil dirinya sendiri.
- cout << n << " ";: Menampilkan nilai n diikuti dengan spasi sebagai pemisah.
- countdown(n - 1);: Memanggil fungsi countdown lagi dengan nilai n dikurangi 1, ini adalah langkah rekursif yang mengurangi nilai n setiap kali fungsi dipanggil.

#### Bagian 3

```C++
int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan inputnya
    cout << endl;
    return 0;
}
```

Fungsi main atau fungsi utama ini merupakan fungsi yang pertama kali akan dieksekusi dalam program. Pada main terdapat berbagai fungsi yang telah dibuat sebelumnya sehingga pada main hanya tinggal mengatur saja posisi fungsi yang telah di buat.

- cout << "Rekursif Langsung: ";: Menampilkan teks "Rekursif Langsung: " di layar.
- countdown(5);: Memanggil fungsi countdown dengan nilai awal 5.
- cout << endl;: Menambahkan baris baru setelah semua angka ditampilkan.
- return 0;: Mengakhiri fungsi main dengan mengembalikan nilai 0, yang menandakan bahwa program berakhir tanpa error.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/CodeGuid1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OUTGUIDED1.png" alt="Alt Text">
</p>

#### Penjelasan

Output dari program diatas akan menampilkan output "Rekursif Langsung: 5 4 3 2 1" yang merupakan hasil dari hitung mundur dari 5 hingga 1 menggunakan pendekatan rekursif.

### 2. Guided 2

```C++
#include<iostream>
using namespace std;

void functionB(int n); // Deklarasi fungsi functionB

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() { // Memperbaiki penulisan 'int main'
    int num = 5; // Memperbaiki penulisan 'int num = 5'
    cout << "Rekursif Tidak Langsung: "; // Memperbaiki penulisan string
    functionA(num);
    return 0; // Memperbaiki penulisan 'return 0'
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include<iostream>
using namespace std;
```
- #include<iostream>: Mengimpor library standar input-output di C++ yang digunakan untuk operasi input dan output.
- using namespace std;: Memungkinkan kita menggunakan elemen-elemen dalam namespace std (standard) tanpa perlu menuliskan std:: sebelum setiap fungsi atau objek yang berasal dari library standar.

#### Bagian 2

```C++
   void functionB(int n); // Deklarasi fungsi functionB

   void functionA(int n) {
       if (n > 0) {
           cout << n << " ";
           functionB(n - 1); // Panggilan rekursif tidak langsung
       }
   }
   void functionB(int n) {
       if (n > 0) {
           cout << n << " ";
           functionA(n / 2); // Panggilan rekursif tidak langsung
       }
   }
```
- Fungsi functionB dideklarasikan sebelum functionA untuk memastikan bahwa ketika functionA memanggil functionB, kompiler sudah mengetahui tentang keberadaan functionB.
- Fungsi ini mencetak nilai n dan kemudian memanggil functionB dengan nilai n - 1. Ini terus terjadi secara rekursif selama n lebih besar dari 0.
- Mirip dengan functionA, fungsi ini mencetak nilai n dan memanggil functionA dengan nilai n / 2. Proses ini berlanjut secara rekursif selama n lebih besar dari 0.

#### Bagian 3

```C++
   int main() {
       int num = 5;
       cout << "Rekursif Tidak Langsung: ";
       functionA(num);
       return 0;
   }
```

Fungsi main atau fungsi utama ini merupakan fungsi yang pertama kali akan dieksekusi dalam program. Pada main terdapat berbagai fungsi yang telah dibuat sebelumnya sehingga pada main hanya tinggal mengatur saja posisi fungsi yang telah di buat.

- Variabel num diinisiasi dengan 5.
- Program mencetak string "Rekursif Tidak Langsung: " sebagai pengantar output dari fungsi rekursif.
- functionA dipanggil dengan nilai awal num (5), memulai proses rekursi.
- return 0; menandakan bahwa program berakhir dengan sukses.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/CodeGuid2.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OUTGUIDED2.png" alt="Alt Text">
</p>

#### Penjelasan

Output dari program diatas mengilustrasikan bagaimana dua fungsi dapat saling memanggil satu sama lain dalam pola rekursi tidak langsung, mencetak serangkaian nilai berdasarkan pemanggilan rekursif tersebut. Menampilkan output rekursif tidak langsung dengan nilai 5 4 2 1.

### 3. Guided 3

```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int TABLE_SIZE = 11; // Ukuran tabel hash

// Kelas untuk menyimpan node hash
class HashNode {
public:
    string name; // Nama kunci
    string phone_number; // Nomor telepon sebagai nilai

    // Konstruktor untuk inisialisasi nama dan nomor telepon
    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};

// Kelas untuk struktur data hash map
class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE]; // Array dari vektor untuk tabel hash

public:
    // Fungsi hash untuk menghitung nilai hash dari kunci
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c; // Menambahkan nilai ASCII dari setiap karakter
        }
        return hash_val % TABLE_SIZE; // Menggunakan modulo untuk mendapatkan indeks
    }

    // Fungsi untuk memasukkan pasangan kunci-nilai ke dalam hash map
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name); // Menghitung hash dari nama
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number; // Update nomor telepon jika nama sudah ada
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number)); // Menambahkan node baru jika nama belum ada
    }

    // Fungsi untuk menghapus node berdasarkan nama
    void remove(string name) {
        int hash_val = hashFunc(name); // Menghitung hash dari nama
        for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it); // Menghapus node
                return;
            }
        }
    }

    // Fungsi untuk mencari nomor telepon berdasarkan nama
    string searchByName(string name) {
        int hash_val = hashFunc(name); // Menghitung hash dari nama
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number; // Mengembalikan nomor telepon jika ditemukan
            }
        }
        return ""; // Mengembalikan string kosong jika tidak ditemukan
    }

    // Fungsi untuk mencetak semua isi hash table
    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if (pair != nullptr) {
                    cout << "[" << pair->name << ", " << pair->phone_number << "]"; // Mencetak nama dan nomor telepon
                }
            }
            cout << endl;
        }
    }
};

// Fungsi utama
int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234"); // Memasukkan data
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    // Mencetak nomor telepon berdasarkan nama
    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;
    cout << "Phone Hp Ghana : " << employee_map.searchByName("Ghana") << endl;

    employee_map.remove("Mistah"); // Menghapus data
    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;

    cout << "Hash Table : " << endl;
    employee_map.print(); // Mencetak seluruh hash table

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <string>
#include <vector>
using namespace std;
```
- #include<iostream>: Mengimpor library standar input-output di C++ yang digunakan untuk operasi input dan output.
- #include<string>: digunakan untuk mengedit serta memanipulasi string di dalam kode.
- #include<vector>: dapat digunakan untuk memberikan arah dalam kode sebagai vektor.
- using namespace std;: Memungkinkan kita menggunakan elemen-elemen dalam namespace std (standard) tanpa perlu menuliskan std:: sebelum setiap fungsi atau objek yang berasal dari library standar.

#### Bagian 2

```C++
const int TABLE_SIZE = 11; // Ukuran tabel hash
class HashNode {
public:
    string name; // Nama kunci
    string phone_number; // Nomor telepon sebagai nilai

    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};
```
- Mendefinisikan ukuran tabel hash yang akan digunakan dalam hash map. Deklarasi konstanta TABLE_SIZE = 11.
- Kelas ini menyimpan data dalam bentuk pasangan kunci (name) dan nilai (phone_number).
- Konstruktor menginisialisasi objek dengan nama dan nomor telepon yang diberikan.

#### Bagian 3

```C++
class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE]; // Array dari vektor untuk tabel hash
  int hashFunc(string key) {
      int hash_val = 0;
      for (char c : key) {
          hash_val += c;
      }
      return hash_val % TABLE_SIZE;
  }
```

Menghitung nilai hash dari kunci yang diberikan dengan menjumlahkan nilai ASCII dari setiap karakter, kemudian di modulo dengan TABLE_SIZE

#### Bagian 4

```C++
  void insert(string name, string phone_number) {
      int hash_val = hashFunc(name);
      for (auto node : table[hash_val]) {
          if (node->name == name) {
              node->phone_number = phone_number;
              return;
          }
      }
      table[hash_val].push_back(new HashNode(name, phone_number));
  }
```

Menambahkan pasangan kunci-nilai ke dalam hash map. Jika kunci sudah ada, nilai akan diperbarui.

#### Bagian 5

```C++
  void remove(string name) {
      int hash_val = hashFunc(name);
      for (auto it = table[hash_val].begin(); it != table[hash_val].end(); it++) {
          if ((*it)->name == name) {
              table[hash_val].erase(it);
              return;
          }
      }
  }
```

Menghapus node berdasarkan namanya.

#### Bagian 6

```C++
  string searchByName(string name) {
      int hash_val = hashFunc(name);
      for (auto node : table[hash_val]) {
          if (node->name == name) {
              return node->phone_number;
          }
      }
      return "";
  }
```

Mencari nomor telepon berdasarkan nama. Mengembalikan nomor telepon jika ditemukan, atau string kosong jika tidak.

#### Bagian 7

```C++
  void print() {
      for (int i = 0; i < TABLE_SIZE; i++) {
          cout << i << ": ";
          for (auto pair : table[i]) {
              if (pair != nullptr) {
                  cout << "[" << pair->name << ", " << pair->phone_number << "]";
              }
          }
          cout << endl;
      }
  }
```

Digunakan untuk memunculkan (mengeprint) hasil dari hash table.

#### Bagian 8

```C++
int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");

    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    employee_map.remove("Mistah");
    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl;

    employee_map.print();
    return 0;
}
```

Fungsi main atau fungsi utama ini merupakan fungsi yang pertama kali akan dieksekusi dalam program. Pada main terdapat berbagai fungsi yang telah dibuat sebelumnya sehingga pada main hanya tinggal mengatur saja posisi fungsi yang telah di buat. Membuat objek HashMap, memasukkan beberapa data, mencetak, menghapus, dan mencetak ulang untuk menunjukkan fungsi dari hash map.

#### Full Code Screenshot

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/CodeGuid3.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-9/blob/main/Modul%209/output/OUTGUIDED3.png" alt="Alt Text">
</p>

#### Penjelasan

Output dari program diatas pertamanya memasukkan nomor Mistah, Pastah, dan Ghana. Berikutnya nomor di cetak --> Menghapus nomor Mistah --> Mencetak nomor Mistah setelah di hapus --> Mencetak seluruh isi Hash Table.

## Unguided 

### 1. Unguided 1

#### Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user

**Kode Program:**

```C++
#include <iostream>
#include <algorithm>
#include <vector>

// Mendeklarasikan vector untuk menyimpan elemen heap
std::vector<int> H;
// Mendeklarasikan variabel untuk menyimpan ukuran heap saat ini
int heapSize = -1;

// Fungsi untuk mendapatkan indeks parent dari node saat ini
int parent(int i) {
    return (i - 1) / 2;
}

// Fungsi untuk mendapatkan indeks anak kiri dari node saat ini
int leftChild(int i) {
    return (2 * i) + 1;
}

// Fungsi untuk mendapatkan indeks anak kanan dari node saat ini
int rightChild(int i) {
    return (2 * i) + 2;
}

// Fungsi untuk memperbaiki posisi node ke atas heap jika diperlukan
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

// Fungsi untuk memperbaiki posisi node ke bawah heap jika diperlukan
void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }

    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

// Fungsi untuk memasukkan elemen baru ke dalam heap
void insert(int p) {
    if (static_cast<size_t>(heapSize + 1) >= H.size()) {
        H.push_back(p); // Memastikan ada ruang di vector sebelum menambahkan elemen
    } else {
        H[heapSize + 1] = p;
    }
    heapSize++;
    shiftUp(heapSize);
}

// Fungsi untuk mengambil elemen maksimum dari heap dan memperbaiki struktur heap
int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize--;
    shiftDown(0);
    return result;
}

// Fungsi untuk mengubah prioritas elemen di heap dan memperbaiki struktur heap
void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

// Fungsi untuk mendapatkan elemen maksimum dari heap tanpa menghapusnya
int getMax() {
    return H[0];
}

// Fungsi untuk menghapus elemen dari heap
void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

// Fungsi utama untuk menjalankan operasi heap
int main() {
    int numElements, element;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> numElements;
    std::cout << "Masukkan elemen-elemen heap: ";
    for (int i = 0; i < numElements; ++i) {
        std::cin >> element;
        insert(element);
    }

    std::cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority: " << extractMax() << "\n";
    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int indexToChange, newPriority;
    std::cout << "Enter index to change priority and new priority: ";
    std::cin >> indexToChange >> newPriority;
    changePriority(indexToChange, newPriority);
    std::cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int indexToRemove;
    std::cout << "Enter index to remove: ";
    std::cin >> indexToRemove;
    remove(indexToRemove);
    std::cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
```

**Penjelasan:**

#### Bagian 1

```C++
#include <iostream>
#include <algorithm>
#include <vector>

// Mendeklarasikan vector untuk menyimpan elemen heap
std::vector<int> H;
// Mendeklarasikan variabel untuk menyimpan ukuran heap saat ini
int heapSize = -1;
```

Library iostream digunakan untuk menjalankan operasi input dan output pada program. Library algorithm digunakan untuk menggunakan algoritma std::swap. Library vector digunakan untuk menyimpan heap nantinya.

std::vector<int> H digunakan mendeklarasikan vector H untuk menyimpan elemen heap. int heapSize = -1 menginisialisasi ukuran heap dengan -1 menunjukkan bahwa heap awalnya kosong.

#### Bagian 2

```C++
int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}
```

3 kode di atas digunakan untuk mengembalikan indeks parent, mengembalikan indeks kiri, dan mengembalikan indeks kanan dengan indeks i.

#### Bagian 3

```C++
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        std::swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

```

Kode di atas merupakan fungsi shiftUp dimana selama node i lebih besar dari parentnya, maka node tersebut akan ditukar dan memperbaharui i sebagai parentnya.

#### Bagian 4

```C++
void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }

    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        std::swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}
```

Kode di atas merupakan kode untuk fungsi shiftDown. Dimana ketika child kiri maupun kanan lebih besar dari pada node yang ada maka tukar node child yang lebih besar dan perbaharui indeks ke-i.

#### Bagian 5

```C++
void insert(int p) {
    if (static_cast<size_t>(heapSize + 1) >= H.size()) {
        H.push_back(p); // Memastikan ada ruang di vector sebelum menambahkan elemen
    } else {
        H[heapSize + 1] = p;
    }
    heapSize++;
    shiftUp(heapSize);
}
```

Kode di atas merupakan kode untuk membuat fungsi insert dimana telah ditambahkan elemen baru yaitu p ke dalam heap. Lalu vektor ukurannya di cek apakah sudah cukup atau belum. Jika belum cukup maka akan ditambahkan elemen push_back. Menambah heapSize dan menempatkan elemen baru pada posisi akhir, lalu memanggil shiftUp untuk memastikan heap tetap valid.

#### Bagian 6

```C++
int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize--;
    shiftDown(0);
    return result;
}
```

Pada kode di atas akan menjalankan tugas dengan mengambil elemen maksimum dari heap. Menukar elemen maksimum dengan elemen terakhir dan mengurangi ukuran heap. Lalu memanggil shiftDown untuk memastikan heap tetap valid.

#### Bagian 7

```C++
void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}
```

Pada kode di atas, elemen indeks i menjadi p. Dimana ketika prioritas baru lebih besar maka akan dipanggil shiftUp. Jika lebih kecil, maka memanggil shiftDown.

#### Bagian 8

```C++
int getMax() {
    return H[0];
}
void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}
```

getMax() digunakan untuk mengembalikan elemen maksimum. remove(int i) digunakan untuk menghapus elemen indeks ke-i. Mengatur elemen tersebut ke nilai lebih besar dari elemen maksimum, memanggil shiftUp untuk menempatkannya di root, kemudian memanggil extractMax untuk menghapusnya.

#### Bagian 8

```C++
int main() {
    int numElements, element;
    std::cout << "Masukkan jumlah elemen: ";
    std::cin >> numElements;
    std::cout << "Masukkan elemen-elemen heap: ";
    for (int i = 0; i < numElements; ++i) {
        std::cin >> element;
        insert(element);
    }

    std::cout << "Priority Queue: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    std::cout << "Node with maximum priority: " << extractMax() << "\n";
    std::cout << "Priority queue after extracting maximum: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int indexToChange, newPriority;
    std::cout << "Enter index to change priority and new priority: ";
    std::cin >> indexToChange >> newPriority;
    changePriority(indexToChange, newPriority);
    std::cout << "Priority queue after priority change: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    int indexToRemove;
    std::cout << "Enter index to remove: ";
    std::cin >> indexToRemove;
    remove(indexToRemove);
    std::cout << "Priority queue after removing the element: ";
    for (int i = 0; i <= heapSize; ++i) {
        std::cout << H[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
```
Fungsi di atas merupakan fungsi main yang berupa fungsi utama di dalam program yang disebut dengan fungsi main. Pengguna akan diminta untuk memasukkan jumlah elemen yang akan dimasukkan ke dalam heap. Berikutnya terdapat beberapa operasi yang berjalan di heap sebagai berikut:

- insert: Menambahkan elemen-elemen ke heap. --> Mencetak antrian prioritas saat ini.
- extractMax: Mengambil dan mencetak elemen maksimum dari heap. --> Mencetak antrian prioritas setelah mengeluarkan elemen maksimum.
- changePriority: Mengubah prioritas elemen di indeks tertentu. --> Mencetak antrian prioritas setelah mengubah prioritas elemen.
- remove: Menghapus elemen di indeks tertentu. --> Mencetak antrian prioritas setelah menghapus elemen.
- 
#### Full code Screenshot:

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-8/blob/main/Modul%208/SS/Unguided1.png" alt="Alt Text">
</p>

#### Screenshot Output

<p align="center">
  <img src="https://github.com/rizaledc/Praktikum-Struktur-Data-Assigment-Modul-8/blob/main/Modul%208/SS/OutputUnguided.png" alt="Alt Text">
</p>

#### Penjelasan

Dari output di atas, ketika pengguna diminta memasukkan jumlah elemen, dimasukkan jumlah elemen sebanyak 5 dengan elemennya : 1 2 3 4 5. Berikutnya prioritasnya diurutkan. Dimana nilai maksimum (5) akan dikeluarkan. Pengguna memasukkan prioritas baru di indeks ke 2 yaitu 6. Maka perubahan prioritas menjadi 6 3 4 1. Lalu pada indeks ke-1 elemennya di remove. Akhir elemen menjadi 6 1 4.

## Kesimpulan

Priority queue merupakan antrian dengan elemen-elemen diurutkan sesuai prioritas berdasarkan nilainya. Elemen nilai tertinggi akan diambil terlebih dahulu dibandingkan nilai yang lebih rendah. Priority queue digunakan dalam sistem real-time dalam algoritma untuk meningkatkan efisiensi. Terdapat beberapa cara implementasi priority queue seperti array, linked list, heap, dan binary search tree.

## Referensi

[1]	J. A. Aryandi, M. A. Nugraha, Y. A. A. Basith, M. F. Pratama, D. Pradeka, and D. Anggraini, “Implementasi Algoritma Queue untuk Menentukan Prioritas Pelayanan Umum di Rumah Sakit,” JIKO (Jurnal Inform. dan Komputer), vol. 7, no. 2, p. 218, 2023, doi: 10.26798/jiko.v7i2.806.

[2]	L. Kohútka, “Efficiency of Priority Queue Architectures in FPGA †,” J. Low Power Electron. Appl., vol. 12, no. 3, 2022, doi: 10.3390/jlpea12030039.

