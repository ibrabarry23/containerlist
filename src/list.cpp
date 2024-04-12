#include "list.hpp"

template <typname V>
List<V>::list(): head(nullptr), tail(nullptr){}

    List::<V>~List(){
    while(tail) pop_back();
    }

template <typname V>
bool List<V>::empty() const{
    return m_front == nullptr;
}

template <typname V>
void List<V>:: push_front( V const & val){
      if(empty()){
           head = new node{val, nullptr};
           head = tail;
           return;
       }
    head = new node{val, tail};

}

template <typname V>
void List<V>::push_back( V const & val){
    if(empty()){
        push_front(val);
        return;
    }
   tail->next =  new node{val, nullptr};
   tail = tail->next;
}

template <typname V>
void List<V>::pop_front(){
    if(empty()) return;
    node* tmp = head;
    head = tail->next;
    delte tmp;
    if(empty() tail = nullptr);
}

template <typname V>
void List<V>:: pop_back(){
    // limit cases
    if(empty()) return;
    if(head == tail) popfront();

    node * prev_back = head;
    while(prev_back -> next != tail){prev_back = prev_back->next;}
    delte prev_back;
    tail = prev_back;
    prev_back = nullptr;
}

template <typname V>
   typname List<V>::node const* List<V>:: front() {
        return head;
    }

template <typname V>
void List<V>:: operator += (List<V> const& rhs){
    for(auto n = rhs.front(); n = n-> next) push_back(n->val);
}
void List<V>:: operator += (Vconst& rhs){
     push_back(n->val);
}
bool List<V>:: operator == (List<V> const& rhs){
    auto ptr1 = head();
    auto ptr2 = rhs.head();

    while(ptr1 && ptr2) {
    if(ptr1->val  !=  ptr2-> val ) return false;
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;
    }
    if(ptr1 != ptr2) return false;
    return true;
}

template <typname V>
std::ostream& operator<<(std::ostream& os, list <V> const& rhs){
    os<<"[";
    for(auto ptr = rhs.front(); ptr; ptr = ptr->next){
        os<< ptr->val;
        if(ptr->next) os<<","
    }
    os<<"]";

    return os;
}

