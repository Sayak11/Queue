/*
#include<stdio.h>

#define Max 5

typedef struct{
    int data[Max];
    int f;
    int r;
}QUEUE;

int insert(QUEUE* q,int v){
    if(q->r == Max-1){
        printf("QF");
        return 1;
    }
    if(q->f == Max-1)
    {
        q->f=q->r=0;
        q->data[q->r] = v;
    } else 
    {
        q->r++;
        q->data[q->r] = v;
    }
    return 0;
}

int del_bad(QUEUE *q,int *m)
{
    if(q->f == -1){
        printf("QE");
        return 1;
    }
    if(q->f == q->r){
        *m = q->data[q->f];
        q->f=q->r=-1;
    }
    else{
        *m = q->data[q->f];
        q->f++;
    }
    return 0;
}

int del_good(QUEUE *q,int *m){
    if(q->f==-1){
        printf("QE");
        return 1;
    }
    if(q->f == q->r){
        *m = q->data[q->f];
        q->f=q->r=-1;
    }else{
        *m=q->data[q->f];
        for(int i = q->f + 1 ; i<=q->r ; i++){
            q->data[i-1] = q->data[i];
        }
        q->r -- ;
    }
    return 0;
}

int main(){

    QUEUE q1;

    insert(&q1,3);

}

*/



#include<stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}