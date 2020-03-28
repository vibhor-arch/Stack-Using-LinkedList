template<typename T>
class Node{
public:

    T data;
    Node *next;

    Node(int d){
        this->data = d;
        next =  NULL;
    }
};

template<typename T>
class Stack{
    Node<T> *head;
    int size;
public:

    Stack(){
        head = NULL;
        size = 0;
    }

    void push(T  d){
        Node<T> *temp = new Node<T>(d);
        if(head == NULL)
            head=temp;
        else{
            temp->next = head;
            head=temp;
        }
        ++size;
    }

    T pop(){
        if(head != NULL){
            T d = head->data;
            head=head->next;
            --size;
            return d;
        }
        else{
            cout << "Stack Is Empty::" << endl;
            return 0;
        }
    }

    bool isEmpty(){
        if(head == NULL)
            return true;
        else
            return false;
    }
    T top(){
        if(head != NULL)
            return head->data;
        else{
            cout << "Stack is Empty::" << endl;
            return 0;
        }
    }
    int getSize(){
        if(head == NULL)
            return 0;
        return size;
    }
};
