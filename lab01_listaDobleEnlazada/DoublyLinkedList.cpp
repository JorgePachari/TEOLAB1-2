#include <iostream>

#define MAX_SIZE 6 

class DoublyLinkedList {
private:
    int data[MAX_SIZE]; 
    int prev[MAX_SIZE]; 
    int next[MAX_SIZE]; 
    int head; 
    int tail; 

public:
    DoublyLinkedList() {
        head = -1; 
        tail = -1; 
        for (int i = 0; i < MAX_SIZE; i++) {
            next[i] = i + 1; 
            prev[i] = -1; 
        }
        next[MAX_SIZE - 1] = -1; 
    }

    void append(int value) {
        if (tail + 1 >= MAX_SIZE) {
            std::cout << "Lista llena, no se puede agregar el valor." << std::endl;
            return;
        }

        int newIndex = tail + 1; 
        data[newIndex] = value;   

        if (head == -1) {
            head = tail = newIndex; 
            prev[newIndex] = -1; 
            next[newIndex] = -1; 
        } else {
            next[tail] = newIndex; 
            prev[newIndex] = tail;  
            tail = newIndex; 
            next[tail] = -1; 
        }
    }

    void prepend(int value) {
        if (tail + 1 >= MAX_SIZE) {
            std::cout << "Lista llena, no se puede agregar el valor." << std::endl;
            return;
        }

        for (int i = tail; i >= 0; i--) {
            data[i + 1] = data[i]; 
        }

        data[0] = value; 
        head = 0; 

        if (tail == -1) {
            tail = 0; 
        }
    }

    void deleteValue(int value) {
        if (head == -1) {
            std::cout << "La lista está vacía." << std::endl;
            return;
        }

        int current = head;
        while (current != -1 && data[current] != value) {
            current = next[current]; 
        }

        if (current == -1) {
            std::cout << "El valor no se encontró en la lista." << std::endl;
            return;
        }

        if (current == head && current == tail) {
            head = tail = -1; 
        } else if (current == head) {
            head = next[head]; 
            prev[head] = -1;   
        } else if (current == tail) {
            tail = prev[tail]; 
            next[tail] = -1;   
        } else {
            next[prev[current]] = next[current]; 
            prev[next[current]] = prev[current]; 
        }

        std::cout << "Nodo con valor " << value << " eliminado." << std::endl;
    }

    void printForward() {
        int temp = head;
        while (temp != -1) {
            std::cout << data[temp] << " ";
            temp = next[temp]; 
        }
        std::cout << std::endl;
    }

    void printBackward() {
        int temp = tail;
        while (temp != -1) {
            std::cout << data[temp] << " ";
            temp = prev[temp]; 
        }
        std::cout << std::endl;
    }

    bool isFull() {
        return tail + 1 >= MAX_SIZE; 
    }
};

