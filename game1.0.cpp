#include <iostream>
#include <windows.h>
using namespace std;
void maze1();
void gotoxy(int x, int y);
int movePlayer(int &x, int &y);
char getCharAtXY(short x, short y);
void spaceship1(int x,int y);
void spaceship2(int x,int y);
void spaceship3(int x,int y);
void maze2();
void removespace1(int px,int py);
void removespace2(int px,int py);
void removespace3(int px,int py);
int movesapce(char a,int &x,int &y,int &ex,int &ey);
int movespace1(int &x,int &y,int &ex,int &ey);
int movespace2(int &x,int &y,int &ex,int &ey);
int movespace3(int &x,int &y,int &ex,int &ey);
int px=0,py=0;
int enemy1(int ex,int ey);
int enemy2(int ex,int ey);
int enemy3(int ex,int ey);
int remove_e1(int ex,int ey);
int remove_e2(int ex,int ey);
int remove_e3(int ex,int ey);
int move_enemy(int &ex,int &ey);
int ex=2,ey=2;
int main()

{   
    int x = 1, y = 9;   
    system("cls");
    maze1();
    spaceship1(6,25);
    spaceship2(20,25);
    spaceship3(32,25);
    char a = movePlayer(x, y);
    Sleep(10);
    
    system("cls");
    maze2();
    enemy3(2,ey);

    movesapce(a,x,y,ex,ey);
    
}



void maze1()
{
    cout << "#################################################" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#                                               #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#              |              |                 #" << endl;
    cout << "#################################################" << endl;

}
void maze2(){
    

    cout << "####################################################################################################" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl; 
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  # " << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "#                                                                                                  #" << endl;
    cout << "####################################################################################################" << endl;
}   
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int movesapce(char a,int &x,int &y,int &ex,int &ey){
    if(a==1){
        movespace1(x,y,ex,ey);

    }
    else if(a==2){
        movespace2(x,y,ex,ey);
    }
    else if(a==3){
        movespace3(x,y,ex,ey);        
    }
 
}

int movePlayer(int &x, int &y)
{
    while (true)
    {
        if (GetAsyncKeyState(VK_UP) )
        {
            if (getCharAtXY(x, y - 1) == ' ')
            {
            gotoxy(x, y);
            cout << " ";
            y--;
            gotoxy(x, y);
            cout << "p";
            }
            Sleep(100);
           
        }
        else if (GetAsyncKeyState(VK_DOWN) )
        {
            if (getCharAtXY(x, y + 1) == ' ')
            {
                gotoxy(x, y);
                cout << " ";
                y++;
                gotoxy(x, y);
                cout << "p";
            }
            Sleep(100);
            
        }
         else if (GetAsyncKeyState(VK_RIGHT))
        {
            if (getCharAtXY (x+1, y) == ' ')
            {
                gotoxy(x, y);
                cout << " ";
                x++;
                gotoxy(x, y);
                cout << "p";
            }
            Sleep(100);
            
        }
         else if (GetAsyncKeyState(VK_LEFT) )
        {
            if (getCharAtXY(x - 6, y + 1) == ' ')
            {
                gotoxy(x, y);
                cout << " ";
                x--;
                gotoxy(x, y);
                cout << "p";
            }
            Sleep(100);
            
        }
        if ((x > 0 && x < 15) && y==19 && getCharAtXY(x, y) == 'p') {
            
            return 1;
            
        }
         if ((x > 15 && x < 30) && y==19 && getCharAtXY(x, y) == 'p') {
            
            return 2;
            
        }
         if ((x > 30 && x < 45)&&  y==19 && getCharAtXY(x, y) == 'p') {
    
            return 3;
        }
    }
}
char getCharAtXY(short x, short y)
{
    COORD position = { x, y };
    char character;
    DWORD charactersRead;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

    if (ReadConsoleOutputCharacterA(console, &character, 1, position, &charactersRead) &&
            charactersRead == 1)
    {
            return character;
    }
    return '\0';
}
void spaceship1(int px,int py)
{

 gotoxy(px,py);
 cout << "/\\";
 gotoxy(px-5,py+1);
 cout <<"||||||||||||";
}
void spaceship2(int px,int py)
{ 
    
    gotoxy(px,py-1);
    cout <<"()";
    gotoxy(px,py);
    cout <<"()";
    gotoxy(px-3,py+1);
    cout <<"[__**__]";
}
void spaceship3(int px,int py)
{   
       gotoxy(px+6,py-3);
    cout << "^";
       gotoxy(px+5,py-2);
    cout <<"^-^";
       gotoxy(px+4,py-1);
    cout <<"^---^";
       gotoxy(px+1,py);
    cout << "||||{*}||||";
       gotoxy(px,py+1);
    cout << "|_____#_____|";

}
int movespace1(int &x,int &y,int &ex,int &ey)
{  
    x=6,y=25;
    spaceship1(x,y);
 while (true)
    {
        if (GetAsyncKeyState(VK_UP) )
        {
            if (getCharAtXY(x, y - 1) == ' ')
            {
            gotoxy(x, y); 
            removespace1(x,y);
            y--,
            gotoxy(x, y);
            spaceship1(x,y);
            }

           
        }
        else if (GetAsyncKeyState(VK_DOWN) )
        {
            if (getCharAtXY(x, y + 2) == ' ')
            {
                gotoxy(x, y); 
            removespace1(x,y);
            y++;
            gotoxy(x, y);
            spaceship1(x,y);
            }
                        
        }
         else if (GetAsyncKeyState(VK_RIGHT))
        {
            if (getCharAtXY (x+8, y) == ' ')
            {
                 gotoxy(x, y); 
            removespace1(x,y);
            x++;
            gotoxy(x, y);
            spaceship1(x,y);
            }
            
            
        }
         else if (GetAsyncKeyState(VK_LEFT) )
        {
            if (getCharAtXY(x-6, y) == ' ')
            {
            gotoxy(x, y); 
            removespace1(x,y);
            x--;
            gotoxy(x, y);
            spaceship1(x,y);
            }
            
       
        }
        Sleep(10);
         move_enemy(ex,ey);
    }
   
}            
void removespace3(int px,int py)
{
       gotoxy(px+6,py-3);
    cout << "        ";
       gotoxy(px+5,py-2);
    cout <<"         ";
       gotoxy(px+4,py-1);
    cout <<"          ";
       gotoxy(px+1,py);
    cout << "             ";
       gotoxy(px,py+1);
    cout << "             ";
}
void removespace2(int px,int py)
{
    gotoxy(px,py-1);
    cout <<"        ";
    gotoxy(px,py);
    cout <<"        ";
    gotoxy(px-3,py+1);
    cout <<"        ";
}
void removespace1(int px,int py)
{
 gotoxy(px,py);
 cout << "  ";
 gotoxy(px-5,py+1);
 cout <<"            ";
}
int movespace2(int &x,int &y,int &ex,int &ey)
{  
    x=6,y=25;
    spaceship2(x,y);
 while (true)
    {
        if (GetAsyncKeyState(VK_UP) )
        {
            if (getCharAtXY(x, y - 2) == ' ')
            {
            gotoxy(x, y); 
            removespace2(x,y);
            y--;
            gotoxy(x, y);
            spaceship2(x,y);
            }
           
        }
        else if (GetAsyncKeyState(VK_DOWN) )
        {
            if (getCharAtXY(x, y + 2) == ' ')
            {
                gotoxy(x, y); 
            removespace2(x,y);
            y++;
            gotoxy(x, y);
            spaceship2(x,y);
            }
            
        }
         else if (GetAsyncKeyState(VK_RIGHT))
        {
            if (getCharAtXY (x+4, y) == ' ')
            {
                 gotoxy(x, y); 
            removespace2(x,y);
            x++;
            gotoxy(x, y);
            spaceship2(x,y);
            }
            
        }
         else if (GetAsyncKeyState(VK_LEFT) )
        {
            if (getCharAtXY(x-4, y) == ' ')
            {
            gotoxy(x, y); 
            removespace2(x,y);
            x--;
            gotoxy(x, y);
            spaceship2(x,y);
            }
            
       
        }
        Sleep(10);
        move_enemy(ex,ey);
    }
}
int movespace3(int &x,int &y,int &ex,int &ey)
{  
    x=6,y=25;
    spaceship3(x,y);
 while (true)
    {
        if (GetAsyncKeyState(VK_UP) )
        {
            if (getCharAtXY(x, y - 4) == ' ')
            {
            gotoxy(x, y); 
            removespace3(x,y);
            y--;
            gotoxy(x, y);
            spaceship3(x,y);
            }
            
           
        }
        else if (GetAsyncKeyState(VK_DOWN) )
        {
            if (getCharAtXY(x, y + 2) == ' ')
            {
                gotoxy(x, y); 
            removespace3(x,y);
            y++;
            gotoxy(x, y);
            spaceship3(x,y);
            }
            
            
        }
         else if (GetAsyncKeyState(VK_RIGHT))
        {
            if (getCharAtXY (x+14, y) == ' ')
            {
                 gotoxy(x, y); 
            removespace3(x,y);
            x++;
            gotoxy(x, y);
            spaceship3(x,y);
            }
            
            
        }
         else if (GetAsyncKeyState(VK_LEFT) )
        {
            if (getCharAtXY(x-1, y) == ' ')
            {
            gotoxy(x, y); 
            removespace3(x,y);
            x--;
            gotoxy(x, y);
            spaceship3(x,y);
            }
            
       
        }
        Sleep(10);
        move_enemy(ex,ey);
    }
}            

int enemy1(int ex,int ey){
    gotoxy(ex,ey);
    cout <<"#_#_#_#";
    gotoxy(ex+1,ey+1);
    cout <<"--()--";
    gotoxy(ex+3,ey+2); 
    cout <<"\\/";
}

int enemy2(int ex,int ey){
    gotoxy(ex+10,ey);
    cout <<"#_#_#_#";
    gotoxy(ex+11,ey+1);
    cout <<"--()--";
    gotoxy(ex+13,ey+2); 
    cout <<"\\/";
}

int enemy3(int ex, int ey){
    gotoxy(ex, ey);
    cout << "#--\\";
    gotoxy(ex, ey + 1);
    cout << "_()=>";
    gotoxy(ex, ey + 2);
    cout << "#--/";
}

int remove_e1(int ex,int ey){
    gotoxy(ex,ey);
   cout <<"       ";
    gotoxy(ex+1,ey+1);
    cout <<"      ";
    gotoxy(ex+3,ey+2); 
    cout <<"   ";
}
int remove_e2(int ex,int ey)
{
    gotoxy(ex+10,ey);
    cout <<"       ";
    gotoxy(ex+11,ey+1);
    cout <<"      ";
    gotoxy(ex+13,ey+2); 
    cout <<"   ";
}
int remove_e3(int ex,int ey){
    gotoxy(ex,ey);
    cout <<"     ";
    gotoxy(ex,ey+1);
    cout <<"     ";
    gotoxy(ex,ey+2);
    cout <<"     ";
}
int move_enemy(int &ex,int &ey)
{
    if(ex<80){
    remove_e1(ex,2);
    remove_e2(ex,2);
    ex++,
    Sleep(10);
    enemy1(ex,2);
    enemy2(ex,2);
    }
    else {
    remove_e1(ex,2);
    remove_e2(ex,2);
    ex=2;
    enemy1(ex,2);
    enemy2(ex,2);

    }
   
    if(ey<26){
    remove_e3(2,ey);
    ey++;
    Sleep(10);
    enemy3(2,ey);
    }
    else{
        remove_e3(2,ey);
        ey=2;
        enemy3(2,ey);
    }
    
    
}
