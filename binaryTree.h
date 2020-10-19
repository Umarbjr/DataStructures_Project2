#ifndef BINARYTREE
#define BINARYTREE
#include "binaryNode.h"

template<class T>
class binaryTree {
public:
    
    binaryNode<T>* aHead;	
	binaryNode<T>* bHead;
	binaryNode<T>* cHead;
	binaryNode<T>* dHead;
	binaryNode<T>* eHead;
	binaryNode<T>* fHead;
	binaryNode<T>* gHead;
	binaryNode<T>* hHead;
	binaryNode<T>* iHead;
	binaryNode<T>* jHead;
	binaryNode<T>* kHead;
	binaryNode<T>* lHead;
	binaryNode<T>* mHead;
    binaryNode<T>* nHead;
	binaryNode<T>* oHead;
	binaryNode<T>* pHead;
	binaryNode<T>* qHead;
	binaryNode<T>* rHead;
	binaryNode<T>* sHead;
	binaryNode<T>* tHead;
	binaryNode<T>* uHead;
	binaryNode<T>* vHead;
	binaryNode<T>* wHead;
	binaryNode<T>* xHead;
	binaryNode<T>* yHead;
	binaryNode<T>* zHead;
	binaryNode<T>* ranHead;

	long int size = 0;
    long long int foundCompare = 0;
    long long int notFoundCompare = 0;
    long long int compares = 0;
        
    binaryTree(){
        aHead = nullptr;
		bHead = nullptr;
		cHead = nullptr;
		dHead = nullptr;
		eHead = nullptr;
		fHead = nullptr;
		gHead = nullptr;
		hHead = nullptr;
		iHead = nullptr;
		jHead = nullptr;
		kHead = nullptr;
		lHead = nullptr;
		mHead = nullptr;
        nHead = nullptr;
		oHead = nullptr;
		pHead = nullptr;
		qHead = nullptr;
		rHead = nullptr;
		sHead = nullptr;
		tHead = nullptr;
		uHead = nullptr;
		vHead = nullptr;
		wHead = nullptr;
		xHead = nullptr;
		yHead = nullptr;
		zHead = nullptr;
		ranHead = nullptr;
    }

	void insert(T x) {
		if (x[0] == 'a') {
			return insert(x, aHead);
		}
		else if (x[0] == 'b') {
			return insert(x, bHead);
		}
		else if (x[0] == 'c') {
			return insert(x, cHead);
		}
		else if (x[0] == 'd') {
			return insert(x, dHead);
		}
		else if (x[0] == 'e') {
			return insert(x, eHead);
		}
		else if (x[0] == 'f') {
			return insert(x, fHead);
		}
		else if (x[0] == 'g') {
			return insert(x, gHead);
		}
		else if (x[0] == 'h') {
			return insert(x, hHead);
		}
		else if (x[0] == 'i') {
			return insert(x, iHead);
		}
		else if (x[0] == 'j') {
			return insert(x, jHead);
		}
		else if (x[0] == 'k') {
			return insert(x, kHead);
		}
		else if (x[0] == 'l') {
			return insert(x, lHead);
		}
		else if (x[0] == 'm') {
			return insert(x, mHead);
		}
		else if (x[0] == 'n') {
			return insert(x, nHead);
		}
		else if (x[0] == 'o') {
			return insert(x, oHead);
		}
		else if (x[0] == 'p') {
			return insert(x, pHead);
		}
		else if (x[0] == 'q') {
			return insert(x, qHead);
		}
		else if (x[0] == 'r') {
			return insert(x, rHead);
		}
		else if (x[0] == 's') {
			return insert(x, sHead);
		}
		else if (x[0] == 't') {
			return insert(x, tHead);
		}
		else if (x[0] == 'u') {
			return insert(x, uHead);
		}
		else if (x[0] == 'v') {
			return insert(x, vHead);
		}
		else if (x[0] == 'w') {
			return insert(x, wHead);
		}
		else if (x[0] == 'x') {
			return insert(x, xHead);
		}
		else if (x[0] == 'y') {
			return insert(x, yHead);
		}
		else if (x[0] == 'z') {
			return insert(x, zHead);
		}
		else {
			return insert(x, ranHead);
		}

	}

    void insert(T x, binaryNode<T> *&t) {
        if (x == "") return;
		if (t == nullptr) {
			t = new binaryNode<T>(x);
			size++;
		}
		else if (x.compare( t->data)<0) {
			insert(x, t->left);
		}
		else if (x.compare(t->data)>0) {
			insert(x, t->right);
		}
    }

	binaryNode<T>* findMin(binaryNode<T>* t) {
		if (t == nullptr) {
			return nullptr;
		}
		else if (t->left == nullptr) {
			return t;
		}
		return findMin(t->left);
	}

	binaryNode<T>* findMax(binaryNode<T>* t) {
		if (t == nullptr) {
			return nullptr;
		}
		else if (t->right == nullptr) {
			return t;
		}
		return findMax(t->right);
	}

    void remove(T x, binaryNode<T>*& t) {
		if (x == "") return;
		if (t == nullptr) {
			return;
		}
		else if (x.compare(t->data) <0) {
			remove(x, t->left);
		}
		else if (x.compare(t->data) > 0) {
			remove(x, t->right);
		}
		else {
			binaryNode<T>* oldNode;
			if (t->left == nullptr) {
				oldNode = t;
				t = t->right;
				delete oldNode;
				size--;
                return;
			}
			else if (t->right == nullptr) {
				oldNode = t;
				t = t->left;
				delete oldNode;
				size--;
				return;
			}

			oldNode = findMin(t->right);
			t->data = oldNode->data;
			remove(t->data, t->right);
		}
	}

    binaryNode<T>* find(T x) {
		if (x[0] == 'a') {
			return find(x, aHead);
		}
		else if (x[0] == 'b') {
			return find(x, bHead);
		}
		else if (x[0] == 'c') {
			return find(x, cHead);
		}
		else if (x[0] == 'd') {
			return find(x, dHead);
		}
		else if (x[0] == 'e') {
			return find(x, eHead);
		}
		else if (x[0] == 'f') {
			return find(x, fHead);
		}
		else if (x[0] == 'g') {
			return find(x, gHead);
		}
		else if (x[0] == 'h') {
			return find(x, hHead);
		}
		else if (x[0] == 'i') {
			return find(x, iHead);
		}
		else if (x[0] == 'j') {
			return find(x, jHead);
		}
		else if (x[0] == 'k') {
			return find(x, kHead);
		}
		else if (x[0] == 'l') {
			return find(x, lHead);
		}
		else if (x[0] == 'm') {
			return find(x, mHead);
		}
		else if (x[0] == 'n') {
			return find(x, nHead);
		}
		else if (x[0] == 'o') {
			return find(x, oHead);
		}
		else if (x[0] == 'p') {
			return find(x, pHead);
		}
		else if (x[0] == 'q') {
			return find(x, qHead);
		}
		else if (x[0] == 'r') {
			return find(x, rHead);
		}
		else if (x[0] == 's') {
			return find(x, sHead);
		}
		else if (x[0] == 't') {
			return find(x, tHead);
		}
		else if (x[0] == 'u') {
			return find(x, uHead);
		}
		else if (x[0] == 'v') {
			return find(x, vHead);
		}
		else if (x[0] == 'w') {
			return find(x, wHead);
		}
		else if (x[0] == 'x') {
			return find(x, xHead);
		}
		else if (x[0] == 'y') {
			return find(x, yHead);
		}
		else if (x[0] == 'z') {
			return find(x, zHead);
		}
		else {
			return find(x, ranHead);
		}
	}

    binaryNode<T>* find(T x, binaryNode<T>* t) {
		if (t == nullptr) {
			notFoundCompare += compares;
			compares = 0;
			return t;
		}
		
		compares++;
		if (x.compare(t->data) < 0) {
			return find(x, t->left);
		}
		else if (x.compare(t->data) > 0) {
			return find(x, t->right);
		}
		else {
			foundCompare += compares;
			compares = 0;
			return t;
		}
		
	}

    int getNumberofNodes() { return size; }
	
	void clear(binaryNode<T>* t) {
		if (t == nullptr) {
			return ;
		}
		else {
			clear(t->left);
			clear(t->right);
			delete(t);
			size--;
		}
	}

};
#endif