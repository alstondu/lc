// Practice 1
// 2024/03/27

#include <iostream>
using namespace std;

class MyLinkedList{
public:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int val): val(val), next(nullptr){}
    };

    MyLinkedList(){
        _size = 0;
        _dummyHead = new ListNode(0);
    }

    int get(int index){
        if (index < 0 || index > _size - 1){
            return -1;
        }
        ListNode* cur = _dummyHead->next;
        while(index){
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val){
        ListNode* newNode = new ListNode(val);
        newNode->next = _dummyHead->next;
        _dummyHead->next = newNode;
        _size++;
    }

    void addAtTail(int val){
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyHead;
        while(cur != nullptr){
            cur = cur->next;
        }
        cur->next = newNode;
        _size++;
    }

    void addAtIndex(int index, int val){
        ListNode* newNode = new ListNode(val);
        ListNode* cur = _dummyHead;
        if (index < 0) index = 0;
        if (index > _size - 1) return;

        while(index--){
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        _size++;
    }

    void deleteAtIndex(int index){
        if (index > _size - 1) return;
        ListNode* cur = _dummyHead;
        while(index--){
            cur = cur->next;
        }
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp = nullptr;
        _size--;
    }
private:
    int _size;
    ListNode* _dummyHead;
};

int main(){
    return 0;
}