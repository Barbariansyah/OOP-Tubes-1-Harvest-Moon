#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

class Product{
//Abstract base class for products
protected:
  double Price;
public:
  void Product(double _Price);
  double getPrice() const;

  virtual void Print() = 0;
}

class FarmProduct : public Product{
  //Farm Product
}

class SideProduct : public Product{
  //Side Product
}

class CowMeat : public FarmProduct{
public:
  CowMeat();//Contoh implementasi CowMeat():Product(150);
  void Print();
}

class GoatMeat : public FarmProduct{
public:
  GoatMeat();
  void Print();
}

class RabbitMeat : public FarmProduct{
public:
  RabbitMeat();
  void Print();
}

class ChickenMeat : public FarmProduct{
public:
  ChickenMeat();
  void Print();
}

class DuckMeat : public FarmProduct{
public:
  DuckMeat();
  void Print();
}

class CowMilk : public FarmProduct{
public:
  CowMilk();
  void Print();
}

class GoatMilk : public FarmProduct{
public:
  GoatMilk();
  void Print();
}

class ChickenEgg : public FarmProduct{
public:
  ChickenEgg();
  void Print();
}

class DuckEgg : public FarmProduct{
public:
  DuckEgg();
  void Print();
}

class DinoEgg : public FarmProduct{
public:
  DinoEgg();
  void Print();
}

class BeefRolade : public SideProduct{
public:
  BeefRolade();
  void Print();
}

class Pancake : public SideProduct{
public:
  Pancake();
  void Print();
}

class ChickenButtermilk : public SideProduct{
public:
  ChickenButtermilk();
  void Print();
}

class GoatCheese : public SideProduct{
public:
  GoatCheese();
  void Print();
}

#define
