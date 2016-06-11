#include <iostream>
#include "abstract.hpp"

using namespace std;

template <class T> class ArrayQueue //: public Stack<T>
{
private:
    int front, rear, scope;
    T *queue;

public:
    // Contructor
    ArrayQueue( int initialCapacity = 8 )
    {
        if( initialCapacity < 0 )
        {
            cerr << "The initial capacity is invalid:" << initialCapacity;
            throw new out_of_range( "" );
        }
        queue = new T[ initialCapacity + 1 ];
        scope = initialCapacity;
        front = rear = 0;
    }

    // Methods
    bool isEmpty()
    {
        return front == rear;
    }

    T getFrontElement()
    {
        if( isEmpty() )
            return NULL;
        return queue[ ( front + 1 ) % scope ];
    }

    T getRearElement()
    {
        if( isEmpty() )
            return NULL;
        return queue[ rear ];
    }

    /*
    void put( T theElement )
    {
        if( ( rear + 1 ) % scope == front )
    }*/

};

int main()
{
    cout << noboolalpha << endl;
    ArrayQueue<char> *number = new ArrayQueue<char>();
    if( number->getFrontElement() == NULL )
        cout << "I am the best!!!" << endl;
    return 0;
}
