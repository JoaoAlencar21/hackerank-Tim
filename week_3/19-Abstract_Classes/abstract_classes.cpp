#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache {
    public:
        LRUCache(int capacity) {
            cp = capacity;
            head = nullptr;
            tail = nullptr;
        }
    
        int get(int key) override {
            if (mp.find(key) == mp.end()) {
                return -1; // cache miss
            }
    
            Node* node = mp[key];
            moveToHead(node);
            return node->value;
        }
    
        void set(int key, int value) override {
            if (mp.find(key) != mp.end()) {
                // Key exists, update value and move to head
                Node* node = mp[key];
                node->value = value;
                moveToHead(node);
            } else {
                // Key does not exist
                if (mp.size() == cp) {
                    // Cache is full → remove LRU (tail)
                    mp.erase(tail->key);
                    removeNode(tail);
                }
    
                // Create new node
                Node* newNode = new Node(key, value);
                insertAtHead(newNode);
                mp[key] = newNode;
            }
        }
    
    private:
        void removeNode(Node* node) {
            if (node->prev) node->prev->next = node->next;
            else head = node->next; // was head
    
            if (node->next) node->next->prev = node->prev;
            else tail = node->prev; // was tail
    
            delete node;
        }
    
        void moveToHead(Node* node) {
            if (node == head) return;
    
            // Detach node
            if (node->prev) node->prev->next = node->next;
            if (node->next) node->next->prev = node->prev;
    
            if (node == tail) tail = node->prev;
    
            // Insert at head
            node->prev = nullptr;
            node->next = head;
            if (head) head->prev = node;
            head = node;
    
            if (tail == nullptr) tail = head;
        }
    
        void insertAtHead(Node* node) {
            node->prev = nullptr;
            node->next = head;
    
            if (head) head->prev = node;
            head = node;
    
            if (tail == nullptr) tail = head;
        }
    };
    

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
