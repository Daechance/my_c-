#include <iostream>
using namespace std;

void draw_line(char ch, int width, bool inner)
{
    if (inner == 1)
    {
        for (int i = 1; i <= width; i++)
        {
            cout << ch;
        }
        cout << endl;
    }
    else
    {
        for (int j = 1; j <= width; j++)
        {
            if (j == 1 || j == width)
            {
                cout << ch;
            }
            else
            {
                cout << ' ';
            }

        }
        cout << endl;

    }

    /* - ���� ch�� ����Ͽ� width��ŭ �� ���� ����Ѵ�.
   - ù ���� ������ ���̸� ch�� ����Ѵ�.
   - ù ���� ������ ���� �ƴ� ��� inner�� ���� ����� �޸��Ѵ�.
   : true�� ����(�� ��)��, false�� ch�� ����Ѵ�.*/
}

int main()
{
    char ch;
    int x;
    int y;
    bool inner;

    cout << "input ch and x :";
    cin >> ch >> x;
    for (int i = 1; i <= x; i++)
    {
        if (i == 1 || i == x)
        {
            inner = 1;
        }
        else
        {
            inner = 0;
        }
        draw_line(ch, x, inner);
    }

    cout << "input ch, x and y :";
    cin >> ch >> x >> y;
    for (int i = 1; i <= y; i++)
    {
        if (i == 1 || i == y)
        {
            inner = 1;
        }
        else
        {
            inner = 0;
        }
        draw_line(ch, x, inner);
    }


}

/*
input ch and x :$ 4
$$$$
$  $
$  $
$$$$
input ch, x and y :5 10
10
5555555555
5        5
5        5
5        5
5        5
5        5
5        5
5        5
5        5
5555555555

C:\Users\WIN\Desktop\helloc++\x64\Debug\helloc++.exe(���μ��� 2960��)��(��) ����Ǿ����ϴ�(�ڵ�: 0��).
�� â�� �������� �ƹ� Ű�� ��������...
*/