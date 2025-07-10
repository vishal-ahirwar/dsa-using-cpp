#ifndef _Q_HXX
#define _Q_HXX
template <typename T>
class Queue
{
    T   _front{};
    T   _rear{};
    int _size{};
    T*  _q{};

   public:
    Queue<T>()
    {
        _front = _rear = -1;
        _size          = 10;
        _q             = new T[this->_size];
    };
    Queue<T>(int size) : _size(size)
    {
        _front = _rear = -1;
        _q             = new T[this->_size];
    };
    void enqueue(const T& x);
    T    dequeue();
    void display();
};

template <typename T>
T Queue<T>::dequeue() {

};

template <typename T>
void Queue<T>::enqueue(const T& x) {

};

template <typename T>
void Queue<T>::display() {

};

#endif