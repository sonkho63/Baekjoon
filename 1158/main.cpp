#include <iostream>
using namespace std;

class queue {
private:
	int order;
public:
	queue(int order);
	int getOrder();
	void delNode();
	queue* next;
	queue* prev;
};

queue::queue(int order) {
	this->order = order;
	this->next = this->prev = this;
}

int queue::getOrder() {
	return this->order;
}

void queue::delNode() {
	this->prev->next = this->next;
	this->next->prev = this->prev;
}

int main() {
	int N, K;
	queue* que = new queue(1);

	cin >> N >> K;
	
	queue* tmp = que;
	for (int i = 2; i <= N; ++i) {
		tmp->next = new queue(i);
		tmp->next->next = que;
		que->prev = tmp->next;
		tmp->next->prev = tmp;
		tmp = tmp->next;
	}

	cout << '<';

	tmp = que->prev;
	while (N > 0) {
		queue* tmp2;
		for (int i = 0; i < K; ++i) {
			tmp = tmp->next;
		}
		tmp2 = tmp->prev;
		cout << tmp->getOrder();
		tmp->delNode();
		tmp = tmp2;
		--N;
		if (N > 0) {
			cout << ", ";
		}
	}

	cout << '>';
}
