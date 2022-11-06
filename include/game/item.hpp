#pragma once
#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

namespace Economy {

// Item list for ids
enum ItemList { PICKAXE, FISHROD, AXE };

// Item properties
typedef struct {
  int id;
  std::string name;
  int lvl;
} ItemProps;


// Pickaxe class
class Pickaxe {
public:
  Pickaxe();
  virtual ~Pickaxe();

  ItemProps data;

  void Mine();
};

// Fishrod class
class Fishrod {
public:
  Fishrod();
  virtual ~Fishrod();

  ItemProps data;

  void Fish();
};

// Axe class
class Axe {
public:
  Axe();
  virtual ~Axe();

  ItemProps data;

  void Cut();
};

} // namespace Economy

#endif