// Copyright 2020 Podovinnikov
#include "TextEditorH.h"

using namespace std;

TextEditor::TextEditor() {
  x = 1;
  y = 1;
  len = 1;
}

TextEditor::TextEditor(const TextEditor &c) {
  x = c.x;
  y = c.y;
  len = c.len;
}

bool TextEditor::operator==(const TextEditor &c) {
  bool res = 0;
  if (x == c.x && y == c.y) {
    res = 1;
  }
  else {
    res = 0;
  }
  return res;
}
int TextEditor::getX() { return x; }
int TextEditor::getY() { return y; }


void TextEditor::txt1() {
  cout << "������� ������ ���� (���-�� �������� � ������) �������� ����� � �����\n";
  cout << ">> ";
}
void TextEditor::leninit() {
  txt1();
  cin >> len;
  system("CLS");
}
int TextEditor::getlen() {
  return len;
}
void TextEditor::txt2 (){
  do{
  position(85, 18);
  cout << "�� ����������� <������� �� ��� X> ������ 101, ������ 0: ";
  cin >> x;
  system("CLS");
} while (x < 0 || x >100);
do {
  position(85, 18);
  cout << "�� ��������� <������� �� ��� Y> ������ 46, ������ 0: ";
  cin >> y;
  system("CLS");
} while (y < 0 || y>45);
system("CLS");
}


void TextEditor::position(int xpos, int ypos) {
  if (xpos < 0 || ypos < 0)
    throw logic_error("Input error xpos ypos");
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD cursorPos;
  cursorPos.X = xpos;
  cursorPos.Y = ypos;
  SetConsoleCursorPosition(hStdOut, cursorPos);
}
int TextEditor::options() {
  HWND window_header = GetConsoleWindow();
  SetWindowPos(window_header, HWND_TOP, 10, 10, 1000, 600, NULL);
  int op5 = 5;
  int hir, vis;
  do {
    position(50, 15);
    cout << "��������� <������ ����>:";
    position(50, 16);
    cout << "<1> ��������� *600x230*";
    position(50, 17);
    cout << "<2> ������� *1000x600*";
    position(50, 18);
    cout << "<3> ������� *1500x800*";
    position(50, 19);
    cout << "<4> ������� ������ ��������������.";
    position(50, 20);
    cout << "�����: ";
    cin >> op5;
    system("CLS");
  } while (op5 < 1 || op5>4);
  if (op5 == 1) {
    hir = 600;
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, 430, 100, hir, 230, NULL);
  }
  if (op5 == 2) {
    hir = 1000;
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, 50, 50, hir, 600, NULL);
  }
  if (op5 == 3) {
    hir = 1500;
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, 10, 10, hir, 800, NULL);
  }
  if (op5 == 4) {
    do {
      position(45, 15);
      cout << "<������>x<������> �� ������ ��������� <1500>x<800>";
      position(45, 16);
      cout << "<������>x<������> �� ������ ���� ������ <600>x<230>";
      position(45, 17);
      cout << "������� ������ ���� � ��������: ";
      cin >> hir;
      system("CLS");
    } while (hir > 1500 || hir < 600);
    do {
      position(45, 15);
      cout << "<������>x<������> �� ������ ��������� <1500>x<800>";
      position(45, 16);
      cout << "<������>x<������> �� ������ ���� ������ <600>x<230>";
      position(45, 17);
      cout << "������� ������ ���� � ��������: ";
      cin >> vis;
      system("CLS");
    } while (vis > 800 || vis < 230);
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, 10, 10, hir, vis, NULL);
  }
  int xx, yy;

  if (op5 == 1) {
    do {
      position(22, 4);
      cout << "��������� <������� ����>:";
      position(22, 5);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(22, 6);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(22, 7);
      cout << "�� ����������� <������� �� ��� X>: ";
      cin >> xx;
      system("CLS");
    } while (xx < 0 || xx >1500);
    do {
      position(22, 4);
      cout << "��������� <������� ����>:";
      position(22, 5);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(22, 6);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(22, 7);
      cout << "�� ��������� <������� �� ��� Y>: ";
      cin >> yy;
      system("CLS");
    } while (yy < 0 || yy>1500);
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, xx, yy, 600, 230, NULL);
  }
  if (op5 == 2) {
    do {
      position(50, 15);
      cout << "��������� <������� ����>:";
      position(50, 16);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(50, 17);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(50, 18);
      cout << "�� ����������� <������� �� ��� X>: ";
      cin >> xx;
      system("CLS");
    } while (xx < 0 || xx >1500);
    do {
      position(50, 15);
      cout << "��������� <������� ����>:";
      position(50, 16);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(50, 17);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(50, 18);
      cout << "�� ��������� <������� �� ��� Y>: ";
      cin >> yy;
      system("CLS");
    } while (yy < 0 || yy>1500);
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, xx, yy, 1000, 600, NULL);
  }
  if (op5 == 3) {
    do {
      position(85, 18);
      cout << "��������� <������� ����>:";
      position(85, 19);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(85, 20);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(85, 21);
      cout << "�� ����������� <������� �� ��� X>: ";
      cin >> xx;
      system("CLS");
    } while (xx < 0 || xx >1500);
    do {
      position(85, 18);
      cout << "��������� <������� ����>:";
      position(85, 19);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(85, 20);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(85, 21);
      cout << "�� ��������� <������� �� ��� Y>: ";
      cin >> yy;
      system("CLS");
    } while (yy < 0 || yy>1500);
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, xx, yy, 1500, 800, NULL);
  }
  if (op5 == 4) {
    do {
      position(5, 5);
      cout << "��������� <������� ����>:";
      position(5, 6);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(5, 7);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(5, 8);
      cout << "�� ����������� <������� �� ��� X>: ";
      cin >> xx;
      system("CLS");
    } while (xx < 0 || xx >1500);
    do {
      position(5, 5);
      cout << "��������� <������� ����>:";
      position(5, 6);
      cout << "������� ������� ���� �� ��� � ��������:";
      position(5, 7);
      cout << "��� X=0; Y=0 => ������� ����� ����";
      position(5, 8);
      cout << "�� ��������� <������� �� ��� Y>: ";
      cin >> yy;
      system("CLS");
    } while (yy < 0 || yy>1500);
    HWND window_header = GetConsoleWindow();
    SetWindowPos(window_header, HWND_TOP, xx, yy, hir, vis, NULL);
  }
  return hir;
}
TextEditor::TextEditor(int _x, int _y, int _len) {
  x = _x;
  y = _y;
  len = _len;
}



void TextEditor::show(char *str) {
  int ab;
  do {
    position(0, 5);
    cout << "��� �����:";
    cout << str << ".";
    position(18, 8);
    cout << "������� <1>, ����� ������ ��������.";
    position(18, 9);
    cout << "������� <2>, ����� ��������� ���������.";
    position(18, 10);
    cout << "������� <3>, ������������� ������.";
    position(18, 11);
    cout << "CMD>> ";
    cin >> ab;
    if (ab != 1 || ab != 2 || ab !=3) {
      system("CLS");
    }
    if (ab == 1) {
      HWND hWnd = GetConsoleWindow();
      ShowWindow(hWnd, SW_MINIMIZE);
    }
    if (ab == 3) {
      textstredit(str, getlen() + 1);
      show(str);
      system("pause");
    }
  } while (ab != 2);
  if (ab == 2) {
    system("pause");
  }

}

void TextEditor::textstr(char* str, int k) {
  string st;

  do{
    printf("������� ������ ������ %d: ",k-1);
    cin.ignore();
    cin.getline(str, k + 1, '.');
  st = str;}while (st.length() > k + 1);
  
}
void TextEditor::textstredit(char* str, int k) {
  string st1;

  do {
    printf("������� ����� ������ ������ %d: ", k - 1);
    cin.ignore();
    cin.getline(str, k + 1, '.');
    st1 = str;
    system("CLS");
  } while (st1.length() > k + 1);

}