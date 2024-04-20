#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const int soluong = 5;

//part 1
string danhsachMSSV[soluong] = {"","2305CT2353","2302CT3456","2305CT3999","2304CT0002"};

//part 2
void NhapMSSV()
{
    cout << "Nhap ma so sinh vien: ";
    getline(cin,danhsachMSSV[0]);
    for (int i = 0; i < 5; i++)
    {
        cout << danhsachMSSV[i] << endl;
    }
}

//part 3
void Indanhsach()
{
    for ( int i = 0; i < 5; i++)
    {
        cout << i << ". " << danhsachMSSV[i] << endl;
    }
}

//part 4
void SapxepDS(string mang[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mang[j] > mang[j + 1]) {
                // Swap the elements
                swap(mang[j], mang[j + 1]);
            }
        }
    }
}
int main()
{
    NhapMSSV();
    Indanhsach();
    SapxepDS(danhsachMSSV, soluong);
    Indanhsach();
}