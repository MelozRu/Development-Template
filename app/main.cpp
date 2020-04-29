// Copyright 2020 Podovinnikov
#include "Song.h"



int main(int argc, const char* argv[])
{
  SetConsoleOutputCP(1251);
  SetConsoleCP(1251);
  fstream f;
 f.open("Playlist.txt", fstream::in | fstream::out | fstream::app);
 ifstream strm("Playlist.txt");
 
  if (!f)
  {
    cout << "Close\n\n";
  }
  else
  {
    cout << "Open\n\n";
  }
  Playlist lib;

  lib.append(Song("20.12.1500", "THE CRANBERRIES", "ZOMBIE","���� ZOMBIE","���������� ZOMBIE","������ THE CRANBERRIES"));
  lib.append(Song("20.12.1835", "THE BEATLES", "LET IT BE", "���� THE BEATLES", "���������� THE BEATLES", "������ THE BEATLES"));
  lib.append(Song("20.12.1000", "LINKIN PARK", "NUMB", "���� LINKIN PARK", "���������� LINKIN PARK", "������ LINKIN PARK"));
  lib.append(Song("20.12.2000", "MICHAEL JACKSON", "BILLIE JEAN", "����", "����������", "������"));
  lib.append(Song("20.12.1752", "EMINEM", "LOSE YOURSELF", "����", "����������", "������"));

  int choice;
  string what;
  string date;
  Song song;
  Song song1;
  string line;
  char ss[20] = { 0 };

  Playlist::Songcase::iterator it;

  do {
    cout << "\n"
"1. ����� ����� �� ��������\n"
"2. ����� ����� �� ����\n"
"3. ����� ����� �� �����������\n"
"4. ���������� ����� � ��������\n"
"5. �������� ����� �� ��������\n"
"6. ������ ���� �����\n"
"7. ������������� ������ �����\n"
"8. ������ ��� ����� ������� �����\n"
"9. ������ ��� ����� ������� �����������\n"
"10.������ ��� ����� ������� �����������\n"
"11. ���-�� ����� � ���������\n"
"12. ������ � ������ � ����\n"
"13. ������� �� ������� ���� ������\n"
"0. �����\n\n"
"��� �����: ";
    cin >> choice;
    cin.ignore();
    cout << endl;
    std::sort(std::begin(lib), std::end(lib), [](Song& p1, Song& p2)
      {
        return p1.getTitle() < p2.getTitle();
      });
    switch (choice)
    {
    case 1:
      cout << "������� �������� �����: ";
      getline(cin, what);
      transform(what.begin(), what.end(), what.begin(), toupper);
      it = lib.begin();
      do {
        it = lib.findByTitle(what, it);
        if (it != lib.end()) {
          cout << *it;
          cout << endl;
          ++it;
          break;
        }
        
      } while (it != lib.end());
      cout << "����� � ����� ��������� ���";
      cout << endl;

      break;
    case 2:
      cout << "������� ���� ������� �����: ";
      cin >> date;
      cin.ignore();
      it = lib.begin();
      do {
        it = lib.findByDate(date, it);
        if (it != lib.end()) {
          cout << *it;
          cout << endl;
          ++it;
          break;
        }
      } while (it != lib.end());
      cout << "����� � ����� ����� ���";
      cout << endl;
      break;

    case 3:
      cout << "������� �����������: ";
      getline(cin, what);
      transform(what.begin(), what.end(), what.begin(), toupper);
      it = lib.begin();
      do {
        it = lib.findByAuthor(what, it);
        if (it != lib.end()) {
          cout << *it;
          cout << endl;
          ++it;
          break;
        }
      } while (it != lib.end());
      cout << "����� � ����� ������������ ���";
      cout << endl;
      break;
    case 4:
      inputSong(song);
      lib.append(song);
   
      break;
    case 5:
      inputSong(song);
      if (lib.remove(song))
        cout << "����� �������\n";
      else
        cout << "����� �� �������\n";
   
      break;
    case 6:

      std::cout << std::endl;
      std::copy(std::begin(lib), std::end(lib), std::ostream_iterator<Song>(std::cout, "\n"));
      break;
    case 7:
      cout << "������� ������ ����� ������� ������ ��������";
      inputSong(song);
      if (lib.remove(song))
        cout << "����� �������\n";
      else
        cout << "����� �� �������\n";
      cout << "������� ����� ������\n";
      inputSong(song1);
      lib.append(song1);
      break;
    case 8:
      cout << "������� �����: ";
      getline(cin, what);
      transform(what.begin(), what.end(), what.begin(), toupper);
      it = lib.begin();
      do {
        it = lib.findByPoet(what, it);
        if (it != lib.end()) {
          cout << *it;
          cout << endl;
          ++it;
          break;
        }
      } while (it != lib.end());
      cout << "����� � ����� ������ ���";
      cout << endl;
      break;
    case 9:
      cout << "������� �����������: ";
      getline(cin, what);
      transform(what.begin(), what.end(), what.begin(), toupper);
      it = lib.begin();
      do {
        it = lib.findByComposer(what, it);
        if (it != lib.end()) {
          cout << *it;
          cout << endl;
          ++it;
          break;
        }
      } while (it != lib.end());
      cout << "����� � ����� ������������ ���";
      cout << endl;
      break;
    case 10:
      cout << "������� �����������: ";
      getline(cin, what);
      transform(what.begin(), what.end(), what.begin(), toupper);
      it = lib.begin();
      do {
        it = lib.findByAuthor(what, it);
        if (it != lib.end()) {
          cout << *it;
          cout << endl;
          ++it;
          break;
        }
      } while (it != lib.end());
      cout << "����� � ����� ������������ ���";
      cout << endl;
      break;
    case 11:
      cout << "����������� ����� � ���������:";
      
      cout << lib.numoOfsongs();
      break;
    case 12:

      std::cout << std::endl;
      std::copy(std::begin(lib), std::end(lib), std::ostream_iterator<Song>(f, "\n"));
 
     /* while (std::getline(f, line)) {
        std::cout << line << std::endl;
      }*/
      while (true)
      {
        strm.getline(ss, 50);             // ������ ����� ��� ������
        if (strm.eof()) break;            // ��������� ����� �����
        cout << ss << '\n';            // ������� �� �����
      }
      break;
    case 13:
      lib.poporydku();
      break;
    case 0:
      break;
    default:
      cout << "\n�� ����� ((\n\n";
    }
  } while (choice != 0);
  f.close();
  system("pause");

  return 0;
}
