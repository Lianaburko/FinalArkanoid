#include <iostream>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QSound>
#include "brick.h"

Brick::Brick(int x, int y) {
  image.load("D:\\FinalArkanoid\\brick_yellow.png");
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::Brick(int x, int y, int e) {
  image.load("D:\\FinalArkanoid\\brick_red.png");
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::Brick(int x, int y, int e, int l) {
  image.load("D:\\FinalArkanoid\\brick_blue.png");
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick() {
  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect() {

  return rect;
}

void Brick::setRect(QRect rct) {

  rect = rct;
}

QImage & Brick::getImage() {

  return image;
}

bool Brick::isDestroyed() {

  return destroyed;
}

void Brick::setDestroyed(bool destr) {
  destroyed = destr;
}
