class Stack {
    private:
        struct Node {
            int value;
            Node* previous;
        };
        int length;
        Node* top;

    public:
        Stack() : length(0), top(nullptr) {}
        int size();
        bool is_empty();
        void push(const int value);
        int pop();
        void clear();
        Node* get_top();
};
