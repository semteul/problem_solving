#include <iostream>
#include <string>

using namespace std;
#define MAX_QUEUE_SIZE 500000

class Queue {
    public:
        void push(int n);
        int pop();
        int size();
        bool empty();
        int front();
        int back();
    private:
        int nextIndex(int i);
        int head=0;
        int rear=0;
        int length=0;
        int queue[MAX_QUEUE_SIZE];
};

int Queue::nextIndex(int i){
    return (i+1)%MAX_QUEUE_SIZE;
}

void Queue::push(int n){
    if(nextIndex(rear) == head) return;
    length++;
    rear = nextIndex(rear);
    queue[rear] = n;
}
int Queue::pop(){
    if(head == rear) return -1;
    length--;
    head = nextIndex(head);
    return queue[head];
}
int Queue::size(){
    return length;
}
bool Queue::empty(){
    if(head==rear)
        return 1;
    else   
        return 0;
}
int Queue::front(){
    if(head==rear)
        return -1;
    return queue[nextIndex(head)];
}
int Queue::back(){
    if(head==rear)
        return -1;
    return queue[rear];
}




int main(void) {
    Queue q;
    int n;
    cin >> n;
    string operation;
    int operand;
    string terminal;

    for(int i=0;i<n;i++){
        cin >> operation;
        if(operation == "push"){
            cin >> operand;
            q.push(operand);
        }
        if(operation == "pop"){
            terminal += to_string(q.pop()) + '\n';
        }
        if(operation == "front"){
            terminal += to_string(q.front()) + '\n';
        }
        if(operation == "back"){
            terminal += to_string(q.back()) + '\n';
        }
        if(operation == "empty"){
            terminal += to_string(q.empty()) + '\n';
        }
        if(operation == "size"){
            terminal += to_string(q.size()) + '\n';
        }
    }

    cout << terminal;
    return 0;
}