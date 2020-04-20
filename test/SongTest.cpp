// Copyright 2020 Podovinnikov
#include <gtest/gtest.h>
#include "Song.h"
TEST(TestClassSong, constrinit1) {
   Song c1 ("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  Song c2 ("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");

  EXPECT_EQ(c1, c2);
}

TEST(TestClassSong, numofsongs) {
  Playlist lib;
  Playlist lib2;
  lib.append(Song("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES"));
  lib2.append(Song("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES"));
  lib.remove(Song("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES"));
  lib2.remove(Song("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES"));
  lib.numoOfsongs();
  lib2.numoOfsongs();

  EXPECT_EQ(lib.numoOfsongs(), lib2.numoOfsongs());
}
TEST(TestClassSong, getauthor) {
  Song c1("20.12.1752", "EMINEM", " LOSE YOURSELF", "����", "����������", "������");
  Song c2("20.12.1752", "EMINEM", " LOSE YOURSELF", "����", "����������", "������");
  EXPECT_EQ(c1.getAuthor(), c2.getAuthor());

}
TEST(TestClassSong, gettitle) {
  Song c1("20.12.2000", "MICHAEL JACKSON", "BILLIE JEAN", "����", "����������", "������");
  Song c2("20.12.2000", "MICHAEL JACKSON", "BILLIE JEAN", "����", "����������", "������");
  EXPECT_EQ(c1.getTitle(), c2.getTitle());

}
TEST(TestClassSong, getpoet) {
  Song c1("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  Song c2("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  EXPECT_EQ(c1.getPoet(), c2.getPoet());

}
TEST(TestClassSong, getcomposer) {
  Song c1("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  Song c2("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  EXPECT_EQ(c1.getComposer(), c2.getComposer());

}
TEST(TestClassSong, getdate) {
  Song c1("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  Song c2("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  EXPECT_EQ(c1.getDate(), c2.getDate());

}
TEST(TestClassSong, getalbum) {
  Song c1("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  Song c2("20.12.1500", "THE CRANBERRIES", "ZOMBIE", "���� ZOMBIE", "���������� ZOMBIE", "������ THE CRANBERRIES");
  EXPECT_EQ(c1.getAlbum(), c2.getAlbum());
  system("pause");
}




