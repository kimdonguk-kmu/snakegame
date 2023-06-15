#include <ncursesw/ncurses.h>
#include <string>

#define 
using namespace std;


void createMap(WINDOW *win);

void game() {
  initscr();
  refresh();

  int xMax, yMax;
  getmaxyx(stdscr, yMax, xMax);

  WINDOW * board_win = newwin(20, 20, (yMax/2)-10, (xMax/2)-10);
  box(board_win, 0, 0);
  wrefresh(board_win);
  printw("hello world");

  getch();
  endwin();
}

int main(){
  game();
}
