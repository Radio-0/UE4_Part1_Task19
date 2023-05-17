/*
Создайте класс Animal с публичным методом Voice(), который выводит в консоль строку с текстом. 
Наследуйте от Animal минимум три класса (к примеру Dog, Cat и т. д.) и в них перегрузите метод Voice() таким образом, чтобы для примера в классе Dog метод Voice() выводилось Woof! в консоль. 
В функции main создайте массив указателей типа Animal и заполните этот массив объектами созданных классов. 
Затем пройдитесь циклом по массиву, вызывая на каждом элементе массива метод Voice(). 
Протестируйте его работу. Должны выводиться сообщения из ваших классов-наследников Animal.

Что оценивается
При вызове метода Voice в массиве наследников класса Animal каждый объект вызывает свою перегруженную версию метода.
*/
#include <iostream>

using namespace std;

class Animal {
public:
    virtual void Voice() {
        cout << "Hi, animal\n";
    }
};
class Dog : public Animal {
    void Voice() override {
        cout << "Woof\n";
    }
};
class Cat : public Animal {
    void Voice() override {
        cout << "Bork\n";
    }
};
class Fish : public Animal {
    void Voice() override {
        cout << "Boop\n";
    }
};

int main()
{
    Animal* arrAnimal[3] = { new Dog, new Cat, new Fish };
    for (auto i : arrAnimal) {
        i->Voice();
    }
    return 0;
}