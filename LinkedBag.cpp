/** ADT bag: Link-based implementation.*/
#include "LinkedBag.h"
#include "Node.h"
#include <cstddef>

/*#TODO 2: Implement LinkedBag as seen in lectures.*/

template<class ItemType>
LinkedBag<ItemType>::LinkedBag(): itemCount(0), headPtr(nullptr) {

}

template<class ItemType>
LinkedBag<ItemType>::LinkedBag(const LinkedBag<ItemType> &aBag) {
    itemCount = aBag.itemCount;
    Node<ItemType>* origChainPtr = aBag.headPtr;

    if(origChainPtr == nullptr)
        headPtr = nullptr;
    else {
        headPtr = new Node<ItemType>();
        headPtr-> setItem(origChainPtr->getItem());

        Node<ItemType> *newChainPtr = headPtr;
        origChainPtr = origChainPtr->getNext();

        while (origChainPtr != nullptr){
            ItemType nextItem = origChainPtr->getItem();

            origChainPtr = origChainPtr->getNext();

            Node<ItemType> *newNodePtr = new Node<ItemType>(nextItem);

            newChainPtr->setNext(newNodePtr);

            newChainPtr = newChainPtr -> getNext();
        }

        newChainPtr->setNext(nullptr);
    }

}

template<class ItemType>
LinkedBag<ItemType>::~LinkedBag() {
    clear();
}

template<class ItemType>
int LinkedBag<ItemType>::getCurrentSize() const {
    return this->itemCount;
}

template<class ItemType>
bool LinkedBag<ItemType>::isEmpty() const {
    return (this->itemCount == 0);
}

template<class ItemType>
bool LinkedBag<ItemType>::add(const ItemType &newEntry) {
    Node<ItemType>* nextNodePtr = new Node<ItemType>(newEntry, this->headPtr);
    this ->headPtr = nextNodePtr;
    itemCount++;
    return true;
}

template<class ItemType>
bool LinkedBag<ItemType>::remove(const ItemType &anEntry) {
    Node<ItemType>* entryNodePtr = getPointerTo(anEntry, headPtr);
    bool canRemoveItem = !isEmpty() && (entryNodePtr !=nullptr);
    if (canRemoveItem)
    {
        entryNodePtr->setItem(headPtr->getItem());

        Node<ItemType>* nodeToDeletePtr = headPtr;
        headPtr = headPtr->getNext();

        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;
        nodeToDeletePtr = nullptr;

        itemCount--;
    }

    return canRemoveItem;
}

template<class ItemType>
void LinkedBag<ItemType>::clear() {
    Node<ItemType>* nodeToDeletePtr = headPtr;
    while (headPtr != nullptr)
    {
        headPtr = headPtr->getNext();

        nodeToDeletePtr->setNext(nullptr);
        delete nodeToDeletePtr;

        nodeToDeletePtr = headPtr;
    }

    itemCount = 0;

}

template<class ItemType>
bool LinkedBag<ItemType>::contains(const ItemType &anEntry) const {
    return getPointerTo(anEntry, this->headPtr) != nullptr;
}

template<class ItemType>
int LinkedBag<ItemType>::getFrequencyOf(const ItemType &anEntry) const {
//STUB
}

template<class ItemType>
vector<ItemType> LinkedBag<ItemType>::toVector() const {
    std::vector<ItemType> bagContents = std::vector<ItemType>();
    fillVector(bagContents, this->headPtr);
    return vector<ItemType>();
}

template<class ItemType>
Node<ItemType> *LinkedBag<ItemType>::getPointerTo(const ItemType &target) const {
//STUB
}
