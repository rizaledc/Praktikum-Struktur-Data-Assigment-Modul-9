#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>
#include <algorithm>
#include <optional>

using namespace std;

struct Mahasiswa {
    string NIM;
    int nilai;
};

class HashTable {
private:
    unordered_map<int, list<Mahasiswa>> table;
    int hashFunction(string NIM) {
        int sum = 0;
        for (char ch : NIM) {
            sum += ch;
        }
        return sum % table.bucket_count();
    }

public:
    HashTable(int size) {
        table.rehash(size);
    }

    void tambahData(Mahasiswa mhs) {
        int index = hashFunction(mhs.NIM);
        table[index].push_back(mhs);
    }

    void hapusData(string NIM) {
        int index = hashFunction(NIM);
        auto& chain = table[index];
        chain.remove_if([NIM](const Mahasiswa& mhs) { return mhs.NIM == NIM; });
    }

    optional<Mahasiswa> cariDataNIM(string NIM) {
        int index = hashFunction(NIM);
        for (auto& mhs : table[index]) {
            if (mhs.NIM == NIM) {
                return mhs;
            }
        }
        return nullopt;
    }

    vector<Mahasiswa> cariDataNilai(int minNilai, int maxNilai) {
        vector<Mahasiswa> hasil;
        for (auto& chain : table) {
            for (auto& mhs : chain.second) {
                if (mhs.nilai >= minNilai && mhs.nilai <= maxNilai) {
                    hasil.push_back(mhs);
                }
            }
        }
        return hasil;
    }

    void tampilkanMenu() {
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari Data Berdasarkan NIM\n";
        cout << "4. Cari Data Berdasarkan Nilai (80-90)\n";
        cout << "5. Keluar\n";
        cout << "Masukkan pilihan: ";
    }
};

int main() {
    HashTable ht(10);
    int pilihan;

    do {
        ht.tampilkanMenu();
        cin >> pilihan;
        switch (pilihan) {
            case 1: {
                Mahasiswa mhsBaru;
                cout << "Masukkan NIM: ";
                cin >> mhsBaru.NIM;
                cout << "Masukkan Nilai: ";
                cin >> mhsBaru.nilai;
                ht.tambahData(mhsBaru);
                break;
            }
            case 2: {
                string NIMHapus;
                cout << "Masukkan NIM yang akan dihapus: ";
                cin >> NIMHapus;
                ht.hapusData(NIMHapus);
                break;
            }
            case 3: {
                string NIMCari;
                cout << "Masukkan NIM yang dicari: ";
                cin >> NIMCari;
                auto found = ht.cariDataNIM(NIMCari);
                if (found) {
                    cout << "NIM: " << found->NIM << ", Nilai: " << found->nilai << endl;
                } else {
                    cout << "Data tidak ditemukan." << endl;
                }
                break;
            }
            case 4: {
                vector<Mahasiswa> foundNilai = ht.cariDataNilai(80, 90);
                if (!foundNilai.empty()) {
                    for (auto& mhs : foundNilai) {
                        cout << "NIM: " << mhs.NIM << ", Nilai: " << mhs.nilai << endl;
                    }
                } else {
                    cout << "Tidak ada data dalam rentang nilai tersebut." << endl;
                }
                break;
            }
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 5);

    return 0;
}