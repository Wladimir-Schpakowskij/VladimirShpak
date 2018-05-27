//QueueBase.h


#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
template<typename T>
class QueueBase
{
public:
 virtual void Push(T element) = 0; //Вставка (добавление) элемента
 virtual T Pop() = 0; //Удаление (взятие) элемента
 virtual T Peek() = 0; //Просмотр (взятие без удаления) элемента
 virtual bool CheckNoEmptyQueue() = 0; //Проверка наличия элементов
};


//QueueBasedOnArray.h


#pragma once
#include "QueueBase.h"
template<typename T>
class QueueBasedOnArray : public QueueBase<T>
{
 T *array;
 int count;
 int end = 0, start = 0, size = 0;
public:
 QueueBasedOnArray(int count); //инициализация
 QueueBasedOnArray(const QueueBasedOnArray &other);  //копирование
 QueueBasedOnArray(QueueBasedOnArray &&other); //перемещение
 QueueBasedOnArray &operator=(const QueueBasedOnArray &other); //присваивание
 QueueBasedOnArray &operator=(QueueBasedOnArray &&other); //присваивание с еремещением
 ~QueueBasedOnArray(); //деструктор
 int GetSize();

 void Push(T element) override  //Вставка (добавление) элемента
 {
  if (size < count)
  {
   array[end] = element;
   end = (end + 1) % count;
   size++;
  }
 };

 T Pop() override  //Удаление (взятие) элемента
 {
  if (size > 0)
  {
   T element = array[start];
   start = (start + 1) % count;
   size--;
   return element;
  }
  return 0;
 };

 T Peek() override  //Просмотр (взятие без удаления) элемента
 {
  return array[start];
 };

 bool CheckNoEmptyQueue() override  //Проверка наличия элементов
 {
  return (size > 0);
 }

 friend ostream & operator << <T>(ostream & stream, const QueueBasedOnArray<T> &a); //Вывод
};
template<typename T>
QueueBasedOnArray<T>::QueueBasedOnArray(int count)
 : count(count)
{
 array = new T[count];
}
template<typename T>
QueueBasedOnArray<T>::~QueueBasedOnArray()
{
 delete[] array;
}
template<typename T>
QueueBasedOnArray<T>::QueueBasedOnArray(const QueueBasedOnArray &other)
{
 array = new T[other.count];
 count = other.count;
 end = other.end;
 start = other.start;
 size = other.size;
 for (int i = 0; i < count; ++i)
 {
  array[i] = other.array[i];
 }
}
template<typename T>
QueueBasedOnArray<T> &QueueBasedOnArray<T>::operator=(const QueueBasedOnArray &other)
{
 if (this == &other)
 {
  return *this;
 }
 delete[] array;
 array = new T[other.count];
 count = other.count;
 for (int i = 0; i < count; ++i)
 {
  array[i] = other.array[i];
 }
}
template<typename T>
QueueBasedOnArray<T> &QueueBasedOnArray<T>::operator=(QueueBasedOnArray &&other)
{
 if (this == &other)
 {
  return *this;
 }
 delete[] array;
 array = other.array;
 count = other.count;
 other.array = nullptr;
}
template<typename T>
QueueBasedOnArray<T>::QueueBasedOnArray(QueueBasedOnArray &&other)
{
 array = other.array;
 count = other.count;
 other.array = nullptr;
}
template<typename T>
int QueueBasedOnArray<T>::GetSize()
{
 return this->size;
};
template<typename T>
ostream & operator << (ostream & stream, const QueueBasedOnArray<T> &a)
{
 QueueBasedOnArray<T> b = a;
 stream << "=====\n";
 for (int i = 0; i < b.count; i++)
 {
  stream << "| " << b.Pop() << "\n";
 }
 stream << "=====\n";
 return stream;
}


//Node.h


#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
template<typename T>
struct Node
{
 T data;
 Node<T> *previous, *next;
};


//BidirectionalCircularList.h


#pragma once
#include "Node.h"
template<typename T>
class BidirectionalCircularList
{
 Node<T> *head;
 int size = 0;
public:
 BidirectionalCircularList(); //инициализация
 BidirectionalCircularList(const BidirectionalCircularList &other);  //копирование
 BidirectionalCircularList(BidirectionalCircularList &&other); //перемещение
 BidirectionalCircularList &operator=(const BidirectionalCircularList &other); //присваивание
 BidirectionalCircularList &operator=(BidirectionalCircularList &&other); //присваивание с еремещением
 ~BidirectionalCircularList(); //деструктор
 int GetSize();
 Node<T> *Find(int number);
 void Push(T element, int number);  //Вставка (добавление) элемента
 T Remove(int number);  //Удаление (взятие) элемента
 T Peek(int number);  //Просмотр (взятие без удаления) элемента
 bool CheckNoEmptyList();  //Проверка наличия элементов
 friend ostream & operator << <T>(ostream & stream, const BidirectionalCircularList<T> &a); //Вывод
};
template<typename T>
BidirectionalCircularList<T>::BidirectionalCircularList()
 : head(NULL)
{
 head = new Node<T>;
 Node<T> *node = new Node<T>;
 head->next = node;
 head->previous = node;
 node->next = head;
 node->previous = head;
}
template<typename T>
BidirectionalCircularList<T>::~BidirectionalCircularList() //деструктор
{
 Node<T> *node = head;
 while (node->next != head)
 {
  node = node->next;
  delete node->previous;
 }
 delete head;
}
template<typename T>
BidirectionalCircularList<T>::BidirectionalCircularList(const BidirectionalCircularList &other) //конструктор копирования
{
 Node<T> oldOldNode = other.head;
 head = other.head;
 Node<T> newOldNode = head;
 size = other.size;
 while (oldNode->next != other.head)
 {
  Node<T> *newNewNode;
  newOldNode->next = newNewNode;
  newNewNode->previous = newOldist;
  newOldNode = newOldNode->next;
  newOldNode->data = oldOldNode->data;
 }
 newOldNode->next = head;
 head->previous = newOldNode;
}
template<typename T>
BidirectionalCircularList<T>::BidirectionalCircularList(BidirectionalCircularList &&other) //перемещение
{
 head = other.head;
 size = other.size;
 other.head = nullptr;
}
template<typename T>
BidirectionalCircularList<T> &BidirectionalCircularList<T>::operator=(const BidirectionalCircularList &other) //присваивание
{
 if (this == &other)
 {
  return *this;
 }
 delete head;
 head = new Node<T>;
 Node<T> *node = head;
 while (node->next != head)
 {
  Node<T> *newNode = new Node<T>;
  Node<T> *oldNode = node->next;
  node->next = newNode;
  newNode->previous = node;
  newNode->data = oldNode->data;
 }
}
template<typename T>
BidirectionalCircularList<T> &BidirectionalCircularList<T>::operator=(BidirectionalCircularList &&other) //присваивание с перемещением
{
 if (this == &other)
 {
  return *this;
 }
 delete head;
 head = other.head;
 other.head = nullptr;
}
template<typename T>
int BidirectionalCircularList<T>::GetSize()
{
 return this->size;
}
template<typename T>
Node<T> *BidirectionalCircularList<T>::Find(int number)
{
 Node<T> *node = head->next;
 for (int i = 0; i < number; i++)
 {
  node = node->next;
 }
 return node;
}
template<typename T>
void BidirectionalCircularList<T>::Push(T element, int number)  //Вставка (добавление) элемента
{
 Node<T> *previousNode = this->Find(number);
 Node<T> *nextNode = previousNode->next;
 Node<T> *newNode = new Node<T>;
 newNode->data = element;
 previousNode->next = newNode;
 newNode->previous = previousNode;
 newNode->next = nextNode;
 nextNode->previous = newNode;
 size++;
}
template<typename T>
T BidirectionalCircularList<T>::Remove(int number)  //Удаление (взятие) элемента
{
 if (size > 0)
 {
  Node<T> *oldNode = this->Find(number);
  Node<T> *nextNode = oldNode->next;
  Node<T> *previousNode = oldNode->previous;
  T element = oldNode->data;
  nextNode->previous = previousNode;
  previousNode->next = nextNode;
  delete oldNode;
  size--;
  return element;
 }
 return 0;
}
template<typename T>
T BidirectionalCircularList<T>::Peek(int number)  //Просмотр (взятие без удаления) элемента
{
 Node<T> *node = this->Find(number);
 return node->data;
}
template<typename T>
bool BidirectionalCircularList<T>::CheckNoEmptyList()  //Проверка наличия элементов
{
 return (size > 0);
}
template<typename T>
 ostream & operator << (ostream & stream, const BidirectionalCircularList<T> &a) //Вывод
{
 BidirectionalCircularList<T> b = a;
 stream << "=====\n";
 for (int i = 0; i < b.size; i++)
 {
  stream << "| " << b.Remove() << "\n";
 }
 stream << "=====\n";
 return stream;
}


//QueueBasedOnBidirectionalCircularList.h


#pragma once
#include "QueueBase.h"
#include "BidirectionalCircularList.h"
template<typename T>
class QueueBasedOnBidirectionalCircularList : public QueueBase<T>
{
 BidirectionalCircularList<T> Queue;
 int count;
public:
 QueueBasedOnBidirectionalCircularList(int count)
  : Queue(), count(count) { }
 QueueBasedOnBidirectionalCircularList(const QueueBasedOnBidirectionalCircularList &other) //конструктор копирования
 {
  Queue = other.Queue;
  count = other.count;
 }
 QueueBasedOnBidirectionalCircularList(QueueBasedOnBidirectionalCircularList &&other)
 {
  Queue = other.Queue;
  count = other.count;
 }
 QueueBasedOnBidirectionalCircularList<T> &operator=(const QueueBasedOnBidirectionalCircularList &other)
 {
  if (this == &other)
  {
   return this;
  }
  count = other.count;
  Queue = other.Queue;
 }
 QueueBasedOnBidirectionalCircularList<T> &operator=(QueueBasedOnBidirectionalCircularList &&other)
 {
  if (this == &other)
  {
   return *this;
  }
  count = other.count;
  Queue = other.Queue;
 }

 ~QueueBasedOnBidirectionalCircularList();

 void Push(T element) override  //Вставка (добавление) элемента
 {
  if (Queue->GetSize() < count) 
  {
   Queue->Push(element, Queue->GetSize());
  }
 }

 T Pop() override  //Удаление (взятие) элемента
 {
  return Queue->Remove(1);
 }

 T Peek() override  //Просмотр (взятие без удаления) элемента
 {
  return Queue->Peek(1);
 }

 bool CheckNoEmptyQueue() override  //Проверка наличия элементов
 {
  return Queue->CheckNoEmptyList();
 }

 friend ostream & operator << <T>(ostream & stream, const QueueBasedOnBidirectionalCircularList<T> &a); //Вывод
};
template<typename T>
QueueBasedOnBidirectionalCircularList<T>::~QueueBasedOnBidirectionalCircularList()
{
 delete Queue;
}
template<typename T>
ostream & operator << (ostream & stream, const QueueBasedOnBidirectionalCircularList<T> &a) //Вывод
{
 QueueBasedOnBidirectionalCircularList<T> b = a;
 stream << "=====\n";
 for (int i = 0; i < b.count; i++)
 {
  stream << "| " << b.Pop() << "\n";
 }
 stream << "=====\n";
 return stream;
}