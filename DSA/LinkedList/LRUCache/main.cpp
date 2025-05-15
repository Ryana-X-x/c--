#include <unordered_map>
using namespace std ;

struct Node {
    int key, value ;
    Node* prev, *next ;
    Node(int k, int v): key(k), value(v), prev(nullptr), next(nullptr) {}
} ;

class LRUCache {
private: 
    int capacity ;
    unordered_map<int, Node*> cache ;
    Node* head, *tail ;

    void removeNode(Node* node) {
        node->prev->next = node->next ; //prev->next
        node->next->prev = node->prev ; //next->prev
    }

    void addNodeToFront(Node* node) {
        node->next = head->next ;
        node->prev = head ; //prev = dummy
        head->next->prev = node ;   
        head->next = node ; // node is in front of dummy head
    }
public:
    LRUCache(int capacity) : capacity(capacity){
        head = new Node(-1, -1) ;   // dummy head
        tail = new Node(-1, -1) ;   // dummy tail
        head->next = tail ;
        tail->prev = head ;
    }
    
    int get(int key) {
        if (cache.find(key) == cache.end()) return -1 ; //key not found 
        Node* node = cache[key] ;
        removeNode(node) ;
        addNodeToFront(node) ;
        return node->value ;
    }
    
    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* existingNode = cache[key] ;
            existingNode->value = value ;
            removeNode(existingNode) ;
            addNodeToFront(existingNode) ;
        } 
        else {
            if (cache.size() == capacity) {
                Node* lruNode = tail->prev ;
                cache.erase(lruNode->key) ;
                removeNode(lruNode) ; 
                delete lruNode ;
            }
        
            Node* newNode = new Node(key, value) ;
            cache[key] = newNode ;
            addNodeToFront(newNode) ;
        }
    }
};