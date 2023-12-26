#include <iostream>
#include <Windows.h>
 
using namespace std;
 
//Hàm di chuyển vị trí con trỏ trong console - đọc bài viết trước nhé
void gotoxy(short int x,short int y)
{  
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD a = {x, y};
    SetConsoleCursorPosition(h, a);
}
 
int main()
{
    for(int x = 0; x <75; x++)
    {
        gotoxy(x,10); //Di chuyển con trỏ tới vị trí tọa độ vị trí (x, 10)
        cout<<"HACKER_PINKARMOR"; //In dòng chữ tại vị trí con trỏ
        Sleep(100); //Tạm dừng 100ms (0.1s)
        system("cls"); //Hàm xóa màn hình console
    }
}