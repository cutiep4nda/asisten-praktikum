#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Ruang2D
{
public:
    virtual double hitungLuas() = 0;
    virtual void show(int id) = 0;
};

class Lingkaran : public Ruang2D
{
    double r;

public:
    Lingkaran(double a)
    {
        r = a;
    }
    double hitungLuas() override
    {
        return 3.14 * r * r;
    }
    void show(int id) override
    {
        cout << "Nomor Objek    : " << id << endl;
        cout << "Bidang         : Lingkaran" << endl;
        cout << "Jari-jari      : " << fixed << setprecision(2) << this->r << endl;
        cout << "Luas Permukaan : " << this->hitungLuas() << endl;
    }
};

class Segitiga : public Ruang2D
{
    double a, t;

public:
    Segitiga(double a, double b)
    {
        this->a = a;
        this->t = b;
    }
    double hitungLuas() override
    {
        return a * t / 2;
    }
    void show(int id) override
    {
        cout << "Nomor Objek    : " << id << endl;
        cout << "Bidang         : Segitiga" << endl;
        cout << "Alas           : " << fixed << setprecision(2) << this->a << endl;
        cout << "Tinggi         : " << this->t << endl;
        cout << "Luas Permukaan : " << this->hitungLuas() << endl;
    }
};

class Segiempat : public Ruang2D
{
    double p, l;

public:
    Segiempat(double a, double b)
    {
        p = a;
        l = b;
    }
    double hitungLuas() override
    {
        return p * l;
    }
    void show(int id) override
    {
        cout << "Nomor Objek    : " << id << endl;
        cout << "Bidang         : Segiempat" << endl;
        cout << "Panjang        : " << fixed << setprecision(2) << this->p << endl;
        cout << "Lebar          : " << this->l << endl;
        cout << "Luas Permukaan : " << this->hitungLuas() << endl;
    }
};

class Persegi : public Segiempat
{
    double si;

public:
    Persegi(double s) : Segiempat(s, s), si(s) {}
    void show(int id) override
    {
        cout << "Nomor Objek    : " << id << endl;
        cout << "Bidang         : Persegi" << endl;
        cout << "Panjang Sisi   : " << fixed << setprecision(2) << this->si << endl;
        cout << "Luas Permukaan : " << this->hitungLuas() << endl;
    }
};

int main()
{
    int n;
    string s;
    cin >> n;
    vector<Ruang2D *> v;
    while (n--)
    {
        cin >> s;
        if (s == "Segitiga")
        {
            double a, t;
            cin >> a >> t;
            v.push_back(new Segitiga(a, t));
        }
        else if (s == "Lingkaran")
        {
            double r;
            cin >> r;
            v.push_back(new Lingkaran(r));
        }
        else if (s == "Segiempat")
        {
            double p, l;
            cin >> p >> l;
            v.push_back(new Segiempat(p, l));
        }
        else
        {
            double s;
            cin >> s;
            v.push_back(new Persegi(s));
        }
    }
    int a, b;
    cin >> a >> b;
    double tot = 0;
    for (a--; a < b; a++)
    {
        tot += v[a]->hitungLuas();
        cout << "-----------------------------" << endl;
        v[a]->show(a + 1);
    }

    cout << "-----------------------------" << endl
         << "TOTAL LUAS     : " << fixed << setprecision(2) << tot << endl
         << "-----------------------------" << endl;
}