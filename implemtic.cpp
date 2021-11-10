#include "prototypetic.h"



Tik_Tak_Toe::Tik_Tak_Toe()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}
void Tik_Tak_Toe::display() {
    for (int i = 0; i < 3; ++i) {
        std::cout << "-------------\n";
        for (int j = 0; j < 3; ++j) {
            std::cout << " |" << board[i][j];
        }
        std::cout << " |\n";
    }
}
bool Tik_Tak_Toe::iswin()
{
    char x1 = 'x';
    char x2 = '0';
    if ((board[0][0] == x1 && board[0][1] == x1 && board[0][2] == x1)
        || (board[1][0] == x1 && board[1][1] == x1 && board[1][2] == x1)
        || (board[2][0] == x1 && board[2][1] == x1 && board[2][2] == x1)
        || (board[0][0] == x1 && board[1][0] == x1 && board[2][0] == x1)
        || (board[0][1] == x1 && board[1][1] == x1 && board[2][1] == x1)
        || (board[0][2] == x1 && board[1][2] == x1 && board[2][2] == x1)
        || (board[0][0] == x1 && board[1][1] == x1 && board[2][2] == x1)
        || (board[0][2] == x1 && board[1][1] == x1 && board[2][0] == x1)) {
        std::cout << player_1 << " is won.\n";
        return true;
    }
    if ((board[0][0] == x2 && board[0][1] == x2 && board[0][2] == x2)
        || (board[1][0] == x2 && board[1][1] == x2 && board[1][2] == x2)
        || (board[2][0] == x2 && board[2][1] == x2 && board[2][2] == x2)
        || (board[0][0] == x2 && board[1][0] == x2 && board[2][0] == x2)
        || (board[0][1] == x2 && board[1][1] == x2 && board[2][1] == x2)
        || (board[0][2] == x2 && board[1][2] == x2 && board[2][2] == x2)
        || (board[0][0] == x2 && board[1][1] == x2 && board[2][2] == x2)
        || (board[0][2] == x2 && board[1][1] == x2 && board[2][0] == x2)) {
        std::cout << player_2 << " is won.\n";
        return true;
    }
    return false;
}
bool Tik_Tak_Toe::isValid(int row, int column)
{
    if (row < 0 || row > 2) {
        std::cout << "row must be 0, 1, or 2.\n";
        return false;
    }
    else if (column < 0 || column > 2) {
        std::cout << "column must be 0, 1, or 2.\n";
        return false;
    }
    else if (board[row][column] != ' ') {
        std::cout << "This point is not empty.\n";
        return false;
    }
    return true;
}


void Tik_Tak_Toe::input() {
    int r, c;
    std::cout << "input command: ";
    std::cin >> r >> c;
    if (isValid(r, c)) {
        m_row = r;
        m_col = c;
        if (count % 2 == 0) {
            str = 'X';
            board[r][c] = str;
        }
        else {
            str = 'O';
            board[r][c] = str;
        }
    }
    else {
        count--;
    }
}
void Tik_Tak_Toe::play() {
    std::cout << "Enter player1 name: ";
    std::cin >> player_1;
    std::cout << "Enter player2 name: ";
    std::cin >> player_2;
    std::cout << std::endl;
    display();
    
    while (true) {
        input();
        std::system("clear");
        display();
        ++count;
        
        if (count == 9)
        {
            std::cout << "DRAW\n";
            break;
        }
        if (iswin())
            break;
    }
    std::cout << "Game is over.\n";
}


// void Tik_Tak_Toe::are_play(char are)
// {
//     if(are == 'y')
//     {
//         clear();
//         play();
//     }else{
//      std::  cout << "good bue" << std::endl;
//     }
// }


// void Tik_Tak_Toe::clear()
// {
//     for(int i = 0; i < 3; ++i)
//     {
//         for(int j = 0; j < 3; ++j)
//         {
//             board[i][j] = ' ';
//         }
//     }
// }
// // exerisze 2


// int Serial::count = 0;

// Serial::Serial()
// {
//    m_id = ++count;
// }

// Serial::~Serial()
// {
//      --count;
// }

// int Serial::get_id()
// {
//     return count;
// }

// Serial::Serial(const Serial& a)
// {
//     ++count;
//     m_id = count;
// }




// //exersize 3

// Calc::Calc(){};


// Calc::Calc(double x,double y)
// {
//     m_y = y;
//     m_x = x;
// }


// void Calc::set_info(double x,double y)
// {
//     m_y = y;
//     m_x = x;
// }

// double Calc::add()
// {
//     return m_y + m_x;
// }

// double Calc::sub()
// {
//     return m_x - m_y;
// }
// double Calc::div()
// {
//     return m_x / m_y;
// }

// double Calc::mul()
// {
//     return m_x * m_y;
// }

