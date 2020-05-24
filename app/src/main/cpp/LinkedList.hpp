//
// Created by space on 2020/5/24 0024.
//
#ifndef DATA_STRUCTURE_LINKEDLIST_HPP
#define DATA_STRUCTURE_LINKEDLIST_HPP
// 模板类
#include <string>
#include <assert.h>

template <class E>
        struct Node{
    Node<E>*next= nullptr;
    E value;
        public:
    Node(E value,Node<E>*next){
        this->value=value;
        this->next=next;
    }
};
template <class E>
        class LinkedList{
            //头指针
            Node<E>*head;
            void push(E e);
            int size();
            E*get(int index);

            int leng=0;
            ~LinkedList();

            Node<E> *node(int i);
        };
template <class E>
void LinkedList<E>::push(E e) {
    //创建新节点
    Node<E> *new_node=new Node<E>(e, nullptr);
    if(head== nullptr){
//        Node<E>*h=head;
//        while(h){
//            if(h->next==NULL){
//
//                break;
//            }
//            h=h->next;
//        }
        Node<E> *last=node(leng-1);
        last->next=new_node;
        leng++;
    } else{
        head=new_node;
        leng=1;
    }

}

template<class E>
Node<E> *LinkedList<E>::node(int index) {
    Node<E> *h=head;
    for (int i = 0; i < index; ++i) {
        h=h->next;
    }
    return h;
}

template <class E>
E * LinkedList<E>::get(int index){
    assert(index>=0&&index<leng);
    return   node(index)->value;

}

template<class E>
int LinkedList<E>::size() {
    return leng;
}

template<class E>
LinkedList<E>::~LinkedList() {

}


#endif //DATA_STRUCTURE_LINKEDLIST_HPP
