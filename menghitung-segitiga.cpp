#include <iostream.h>
void HitungLuasSegitiga(float a, float t);
void main()
{
int i, N;
float a, t;
cout << "banyaknya segitiga?"; 
cin >> N;
for(i=1;i<=N;i++)
{
cout << "\nPanjang alas segitiga?";
cin >> a;
cout << "Tinggi segitiga?";
cin >> t;HitungLuasSegitiga(a,t);
}
}
void HitungLuasSegitiga(float alas, float tinggi)
{
float luas;
luas = ( alas * tinggi )/2.0;
cout << "Luas=" << luas << endl;
}