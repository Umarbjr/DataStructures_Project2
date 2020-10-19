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
    long long int notFoundCompare =0;
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
			insert(x, aHead);
		}
		else if (x[0] == 'b') {
			insert(x, bHead);
		}
		else if (x[0] == 'c') {
			insert(x, cHead);
		}
		else if (x[0] == 'd') {
			insert(x, dHead);
		}
		else if (x[0] == 'e') {
			insert(x, eHead);
		}
		else if (x[0] == 'f') {
			insert(x, fHead);
		}
		else if (x[0] == 'g') {
			insert(x, gHead);
		}
		else if (x[0] == 'h') {
			insert(x, hHead);
		}
		else if (x[0] == 'i') {
			insert(x, iHead);
		}
		else if (x[0] == 'j') {
			insert(x, jHead);
		}
		else if (x[0] == 'k') {
			insert(x, kHead);
		}
		else if (x[0] == 'l') {
			insert(x, lHead);
		}
		else if (x[0] == 'm') {
			insert(x, mHead);
		}
		else if (x[0] == 'n') {
			insert(x, nHead);
		}
		else if (x[0] == 'o') {
			insert(x, oHead);
		}
		else if (x[0] == 'p') {
			insert(x, pHead);
		}
		else if (x[0] == 'q') {
			insert(x, qHead);
		}
		else if (x[0] == 'r') {
			insert(x, rHead);
		}
		else if (x[0] == 's') {
			insert(x, sHead);
		}
		else if (x[0] == 't') {
			insert(x, tHead);
		}
		else if (x[0] == 'u') {
			insert(x, uHead);
		}
		else if (x[0] == 'v') {
			insert(x, vHead);
		}
		else if (x[0] == 'w') {
			insert(x, wHead);
		}
		else if (x[0] == 'x') {
			insert(x, xHead);
		}
		else if (x[0] == 'y') {
			insert(x, yHead);
		}
		else if (x[0] == 'z') {
			insert(x, zHead);
		}
		else {
			insert(x, ranHead);
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
			find(x, aHead);
		}
		else if (x[0] == 'b') {
			find(x, bHead);
		}
		else if (x[0] == 'c') {
			find(x, cHead);
		}
		else if (x[0] == 'd') {
			find(x, dHead);
		}
		else if (x[0] == 'e') {
			find(x, eHead);
		}
		else if (x[0] == 'f') {
			find(x, fHead);
		}
		else if (x[0] == 'g') {
			find(x, gHead);
		}
		else if (x[0] == 'h') {
			find(x, hHead);
		}
		else if (x[0] == 'i') {
			find(x, iHead);
		}
		else if (x[0] == 'j') {
			find(x, jHead);
		}
		else if (x[0] == 'k') {
			find(x, kHead);
		}
		else if (x[0] == 'l') {
			find(x, lHead);
		}
		else if (x[0] == 'm') {
			find(x, mHead);
		}
		else if (x[0] == 'n') {
			find(x, nHead);
		}
		else if (x[0] == 'o') {
			find(x, oHead);
		}
		else if (x[0] == 'p') {
			find(x, pHead);
		}
		else if (x[0] == 'q') {
			find(x, qHead);
		}
		else if (x[0] == 'r') {
			find(x, rHead);
		}
		else if (x[0] == 's') {
			find(x, sHead);
		}
		else if (x[0] == 't') {
			find(x, tHead);
		}
		else if (x[0] == 'u') {
			find(x, uHead);
		}
		else if (x[0] == 'v') {
			find(x, vHead);
		}
		else if (x[0] == 'w') {
			find(x, wHead);
		}
		else if (x[0] == 'x') {
			find(x, xHead);
		}
		else if (x[0] == 'y') {
			find(x, yHead);
		}
		else if (x[0] == 'z') {
			find(x, zHead);
		}
		else {
			find(x, ranHead);
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