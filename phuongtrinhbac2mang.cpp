#include<iostream>
#include<cmath>
using namespace std;
void GiaiPhuongTrinhBac_2(float a, float b, float c)
{
    if (a == 0)
      cout<<"phuong trinh vo nghiem";
    else
    {
        float delta = (float) ( b * b -  4 * a * c );
        if (delta < 0)
            cout << "Phuong trinh VN";
        else
            if (delta == 0)
            {
                cout << "Phuong trinh co nghiem kep x1 = x2 = " << (float)-b / (2 * a);
            }
            else
            {
                float x1 = (-b + sqrt(delta)) / (2 * a);
                float x2 = (-b - sqrt(delta)) / (2 * a);

                cout << "Phuong trinh co 2 nghiem phan biet \n";
                cout << "x1 = " << x1 << "\n";
                cout << "x2 = " << x2 << "\n";
            }
     
    }
}

int main()
{
    float a, b, c;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    GiaiPhuongTrinhBac_2(a, b, c);
        cout << endl;
        return 0;
}
