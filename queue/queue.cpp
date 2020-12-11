#include <iostream> 

using namespace std;

#define BUFFER_SIZE 128

int head_ = 0;
int tail_ = -1;
int cache_[BUFFER_SIZE];

void enqueue(int d) { 
	tail_ = (tail_+1) % BUFFER_SIZE;
	cache_[tail_] = d;
}

int dequeue() {
	int d = cache_[head_];
	head_ = (head_ +1) % BUFFER_SIZE;
	return d;
}

void head() {
	cout << "cache_[head_] = " << cache_[head_] << endl;
}

void tail() {
	cout << "cache_[tail_] = " << cache_[tail_] << endl;
}

void peep(int i) {
	cout << "cache_[ith] = " << cache_[i] << endl;
}

void empty() {
	for(int i = head_ ; i <= tail_ ; head_++) {
		cout << cache_[head_] << endl;
		if(head_ == tail_)
			break;
	}
}

bool isEmpty() {
	if(head_ == tail_)
	{
		cout << "Queue is empty." << endl;
		return true;
	}
	else
		return false;
}

int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	head();
	tail(); 
	peep(4);
	empty();
	isEmpty();
}
