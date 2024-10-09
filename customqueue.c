#include <stdio.h>
#define SIZE 5

int queue[SIZE], front = -1, rear = -1;

void enqueue(int item){
    if(rear == SIZE-1){
        printf("Can't enqueue as the queue is full\n");
    }
    else{
        //The first element condition
        if(front == -1){
            front = 0;
        }
        
        rear = rear + 1;
        queue[rear] = item;
        printf("We have enqueued %d\n",item);
   }
}

void dequeue(){
    if(front == -1){
        printf("Can't dequeue as the queue is empty\n");
    }
    else{
        printf("We have dequeued : %d\n", queue[front]);
        front = front + 1;
        
        if(front > rear){
	        front = -1;
	        rear = -1;
        }
   }
}

void printQueue(){
    if(rear == -1)
        printf("\nUnable to display as queue is empty");
    else{
        int i;
        printf("\nThe queue after enqueue & dequeue ops looks like :");
        
        for(i = front; i <= rear; i++)
	        printf("%d ",queue[i]);
   }
}

int main()
{
    //enqueue
    enqueue(2);
    enqueue(4);
    enqueue(6);
    enqueue(8);
   
    //dequeue
    dequeue();
    dequeue();
   
    printQueue();
    return 0;
}
