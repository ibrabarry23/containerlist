// this lis container is implemented with a singly linked list
#include <iostream>

template <typename V>
struct List{

private:

    struct node{
        node(V const& val, node* n): val(v), next(n){}
        V val;
        node* next;
    };

public:
    List(); // contructor
    ~List(); // destructor

    bool empty() const;
    void push_front( V const & val);
    void push_back( V const & val);

    void pop_front();
    void pop_back();
    node const* front() const;

    void operator += (List<V> const& rhs);
    void operator += (V const& rhs);
    bool operator == (List<V> const& rhs);
private:

    node * head;
    node * tail;

};