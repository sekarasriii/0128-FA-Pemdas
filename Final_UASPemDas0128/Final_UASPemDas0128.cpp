#include <iostream>
using namespace std;

class Matakuliah {
private:
    float Presensi, Activity, Exercise, TugasAkhir;

public:
    Matakuliah() : Presensi(0.0), Activity(0.0), Exercise(0.0), TugasAkhir(0.0) {}

    void setPresensi(float nilai)
    {
        this->Presensi = nilai;
    }
    float getPresensi()
    {
        return Presensi;
    }

    void setActivity(float nilai)
    {
        this->Activity = nilai;
    }
    float getActivity()
    {
        return Activity;
    }

    void setExercise(float nilai)
    {
        this->Exercise = nilai;
    }
    float getExercise()
    {
        return Exercise;
    }

    void setTugasAkhir(float nilai)
    {
        this->TugasAkhir = nilai;
    }
    float getTugasAkhir()
    {
        return TugasAkhir;
    }

    virtual void namaMataKuliah() = 0;

    virtual void inputNilai() = 0;

    virtual void hitungNilaiAkhir() = 0;

    virtual void cekKelulusan() = 0;
};

class Pemrograman : public Matakuliah {
private:
    float NilaiAkhir;

public:
    void namaMataKuliah() {
        cout << "Mata Kuliah: Pemrograman" << endl;
    }

    void inputNilai() {
        float nilai;
        cout << "Masukkan nilai Presensi: ";
        cin >> nilai;
        setPresensi(nilai);

        cout << "Masukkan nilai Activity: ";
        cin >> nilai;
        setActivity(nilai);

        cout << "Masukkan nilai Exercise: ";
        cin >> nilai;
        setExercise(nilai);

        cout << "Masukkan nilai Tugas Akhir: ";
        cin >> nilai;
        setTugasAkhir(nilai);
    }

    void hitungNilaiAkhir() {}

    void cekKelulusan() {}
};

class Jaringan : public Matakuliah {
private:
    float NilaiAkhir;

public:
    void namaMataKuliah() {
        cout << "Mata Kuliah: Jaringan" << endl;
    }

    void inputNilai() {
        float nilai;
        cout << "Masukkan nilai Activity: ";
        cin >> nilai;
        setActivity(nilai);

        cout << "Masukkan nilai Exercise: ";
        cin >> nilai;
        setExercise(nilai);
    }

    void hitungNilaiAkhir() {}

    void cekKelulusan() {}
};

int main() {
    char pilih;
    Matakuliah* matakuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;

    cout << "Pilih Mata Kuliah (P/J): ";
    cin >> pilih;

    if (pilih == 'P' || pilih == 'p') {
        matakuliah = &pemrograman;
    }
    else if (pilih == 'J' || pilih == 'j') {
        matakuliah = &jaringan;
    }
    else {
        cout << "Pilihan tidak valid" << endl;
        return 0;
    }

    matakuliah->namaMataKuliah();
    matakuliah->inputNilai();
    matakuliah->cekKelulusan();

    return 0;
}
