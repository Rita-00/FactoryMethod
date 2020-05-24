#include <iostream>

using namespace std;

class Candy {
  string name;
  string firm;
  string form;
  unsigned int weight;

public:
  Candy(string name, string firm, string form, unsigned int weight) {
    this->name = name;
    this->firm = firm;
    this->form = form;
    this->weight = weight;
  }

  const string getName() const {
    return name;
  }
  const string getFirm() const {
    return firm;
  }
  const string getForm() const {
    return form;
  }
  unsigned int getWeight() const {
    return weight;
  }

  void print_candy() {
    cout << getName() << " " << getFirm() << " " << getForm() << " "
         << getWeight() << endl;
  }

  static Candy *toffee() {
    return new Candy("Bee", "GYP", "toffee", 75);
  }
  static Candy *milk() {
    return new Candy("Cow", "SM", "milk", 50);
  }
  static Candy *chocolate() {
    return new Candy("Rabbit", "GYP", "chocolate", 95);
  }
  static Candy *caramel() {
    return new Candy("Bear", "GYP", "caramel", 85);
  }
};

int main() {
  Candy candy("Car", "GYP", "toffee", 45);
  candy.print_candy();

  Candy *candy1(Candy::toffee());
  candy1->print_candy();

  Candy *candy2(Candy::milk());
  candy2->print_candy();

  Candy *candy3(Candy::chocolate());
  candy3->print_candy();

  Candy *candy4(Candy::caramel());
  candy4->print_candy();
  return 0;
}