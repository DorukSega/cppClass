#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

// ****************************************
// Header file List.h for the ADT list.
// Pointer-based implementation.
//*****************************************
typedef int ListItemType;

class List {
    // constructors and destructor:
   public:
    List();                   // default constructor
    List(const List& aList);  // copy constructor
    ~List();                  // destructor

    // list operations:
    bool isEmpty() const;
    int getLength() const;
    bool retrieve(int index, ListItemType& dataItem) const;
    bool insert(int index, ListItemType newItem);
    bool remove(int index);
    bool display();
    bool display(int amount);
    int count(ListItemType findItem);

   private:
    struct ListNode  // a node on the list
    {
        ListItemType item;  // a data item on the list
        ListNode* next;     // pointer to next node
    };
    int size;        // number of items in list
    ListNode* head;  // pointer to linked list
                     // of items
    ListNode* find(int index) const;
    // Returns a pointer to the index-th node
    // in the linked list
};

#endif  // LIST_H_INCLUDED
