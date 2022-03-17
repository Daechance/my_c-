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

    /* - 문자 ch를 사용하여 width만큼 한 줄을 출력한다.
   - 첫 열과 마지막 열이면 ch를 출력한다.
   - 첫 열과 마지막 열이 아닌 경우 inner에 따라 출력을 달리한다.
   : true면 공백(‘ ’)을, false면 ch를 출력한다.*/
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

C:\Users\WIN\Desktop\helloc++\x64\Debug\helloc++.exe(프로세스 2960개)이(가) 종료되었습니다(코드: 0개).
이 창을 닫으려면 아무 키나 누르세요...
*/