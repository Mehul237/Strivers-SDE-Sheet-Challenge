
// Solution-01: By Array

#include <bits/stdc++.h> 

class Queue {
private:
 int *arr;
 int qfront;
 int rear;
 int size;
 
public:
    Queue() {
        size=10001;
        arr=new int[size];
        qfront=0;
        rear=0;  
    }

    
    bool isEmpty() {
        if(qfront == rear)
         return true;
        return false;  
    }

    void enqueue(int data) {
        if(rear != size)
        
         arr[rear++]=data;
       
    }

    int dequeue() {
        if(rear == qfront)
         return -1;
        else
        {
            int temp=arr[qfront++];
            if(qfront == rear)
            {
                qfront=0;
                rear=0;
            }
            return temp;
        }
         
        
    }

    int front() {
        if(rear == qfront)
         return -1;
        return arr[qfront]; 
    }
};



// Solution-02: 2-pointer Method

#include <bits/stdc++.h> 

class Queue {
   int itr;
   vector<int> v;
   int frontt;

public:

   Queue() {
       // Implement the Constructor
       itr=0;
       v.resize(0);
       frontt=0;
   }


   /*----------------- Public Functions of Queue -----------------*/
  
   bool isEmpty() {
       // Implement the isEmpty() function
       if(frontt>itr-1)
       return true;
       else return false;
    }

   void enqueue(int data) {
       // Implement the enqueue() function
       v.push_back(data);
       itr++;
    }

    int dequeue() {
       // Implement the dequeue() function
       if(frontt<=itr-1)
       {
       return v[frontt++];
       }
       else return -1;
    }

    int front() {
       // Implement the front() function
       if(frontt<=itr-1)
       return v[frontt];
       else return -1;
    }
};
