#include<iostream>

using namespace std;

class matrix
{
    int **p;
    int d1,d2;
    public : matrix(int ,int);
        void get_element(int ,int ,int);
        int &put_element(int ,int);
};

matrix::matrix(int x,int y)
{
    d1 = x;
    d2 = y;
    p = new int*[d1];
    for(int i = 0;i < d1;i++)
        p[i] = new int[d2];
}

void matrix::get_element(int x,int y,int value)
{
    p[x][y] = value;
}

int &matrix::put_element(int i,int j)
{
    return p[i][j];
}

int main()
{
    int m,n;

    cout << "Enter size of matrix : ";
    cin >> m >> n;
    matrix A(m,n);

    cout << "Enter matrix elements row by row" << endl;
    int value;

    for(int i = 0;i < m;i++)
        for(int j = 0;j < n;j++)
        {
            cin >> value;
            A.get_element(i,j,value);
        }
    cout << endl;
    cout << A.put_element(1,2) << endl;

    return 0;
}