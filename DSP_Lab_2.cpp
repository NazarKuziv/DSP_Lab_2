// Lab_2.cpp
// < Кузів Назар >
// Лабораторна робота 2
// Логіка
// Варіант 6

#include <iostream>

using namespace std;

void  Implications(int* a, int* b , int* c, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 && b[i] ==0)
            c[i] = 0;
        else 
            c[i] = 1;
    }
}
void OR(int* a, int* b, int* c, const int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 || b[i] == 1)
        {
            c[i] = 1;
        }
        else
        {
            c[i] = 0;
        }
    }
}
int main()
{
    const int n = 6;
    int p[n] = { 1, 1, 0, 0, 0, 1};
    int q[n] = { 1, 0, 1, 1, 0, 1 };
    int r[n] = { 0, 1, 0, 1, 0, 1 };
    int pq[n];
    int qr[n];
    int Fn[n];
    Implications(p, q, pq, n);
    Implications(q, r, qr, n);
    OR(pq, qr, Fn, n);
    cout << "            (p -> q)or(q -> r)" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "| p | q | r | q -> q | q -> r | (p -> q)or(q -> r) |" << endl;
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "| " << p[i] << " | " << q[i] << " | " << r[i] << " |   " << pq[i] << "    |   " << qr[i] << "    |         " << Fn[i] << "          |" << endl;
    }
    cout << "-----------------------------------------------------" << endl;
}