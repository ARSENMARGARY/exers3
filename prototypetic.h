#ifndef __PROJECT__
#define __PROJECT__
#include <iostream>
#include <string>


class Tik_Tak_Toe {
public:
    Tik_Tak_Toe();
    void play();
private:
    char board[3][3];
   std:: string player_1;
   std:: string player_2;
    int count = 0;
    int m_row;
    int m_col;
    char str;
    
private:
    void display();
    bool isValid(int row, int column);
    void input();
    bool iswin();
    void are_play(char);
    void clear();
};

// class Serial
// {
//     private:
//         int m_id;

//     public:
//         Serial();
//         Serial(const Serial&);
//         ~Serial();
//         static int count;
//         static int get_id();
// };


// class Calc
// {
//     public:
//         Calc();
//         Calc(double,double);
//         void set_info(double,double);
//         double mul();
//         double add();
//         double sub();
//         double div();
        

//     private:
//         double m_y;
//         double m_x;
// };













#endif 