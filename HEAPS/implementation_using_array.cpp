#include<bits/stdc++.h>
using namespace std;

class Heap{

    //member functions
    public:
        int arr[100];
        int size;

    //constructor
    Heap()
    {
        //first wale index me -1 daal dena hai...
        arr[0]=-1;
        //size ko initialize kar dena hai..zero se
        size=0;
    }

    //insert function
    void insert(int val)
    {
        //sabse pehle size ko ek se increase karna hai
        size=size+1;

        //index pointer point karega size index ko
        int index=size;

        //uske baad index wale position me apna val daal denge
        arr[index]=val;

        //uske baad val ko apne sahi jagah pe leke jana hai...
        while(index > 1)
        {
            //val ka parent nikal lena hai..
            int parent=(index/2);
            if(arr[parent] < arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return;
            }
        }
    }

    //print function
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout << arr[i] << " ";
        }cout << endl;
    }

    //delete function..
    void deleteFromHeap()
    {
        //agar size=0 hai...
        if(size==0)
        {
            cout << "Nothing to delete " << endl;
            return;
        }
        //step-1:element ko last me leke jana hai..
        arr[1]=arr[size];

        //step-2 last wale element ko delete kar dena hai..
        size--;

        //step-3: take the root to its correct position
        int i=1;
        while(i < size)
        {
            int leftChild=2*i;
            int rightChild=2*i+1;

            if(leftChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[i],arr[leftChild]);
                i=leftChild;
            }
            else if(rightChild < size && arr[i] < arr[leftChild])
            {
                swap(arr[i],arr[rightChild]);
                i=rightChild;
            }
            else{
                return;
            }
        }
    }
};

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int leftChild = 2*i;
    int rightChild=2*i+1;

    if(leftChild <= n && arr[largest] < arr[leftChild])
    {
        largest=leftChild;
    }
    if(rightChild <= n && arr[largest] < arr[rightChild])
    {
        largest=rightChild;
    }

    if(largest != i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n)
{
    int size=n;
    while(size > 1)
    {
        //step-1: swap the root node and the last node
        swap(arr[size],arr[1]);

        //step-2:Last wale node ko delete kar dena hai...
        size--;

        //step-3:root node ko apne sahi position me place kar dena hai..
        heapify(arr,size,1);

    }
}
int main()
{
    Heap *h=new Heap();
    h->insert(50);
    h->insert(55);
    h->insert(53);
    h->insert(52);
    h->insert(54);
    h->print();

    h->deleteFromHeap();
    h->print();



    //heapify algorithm....

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    //hume leaf node ko process ni karna hai...
    //leaf node ka index (n/2)+1 -> n tak hota hai...
    //hume loop chalana hoga n/2 -> 1 tak
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }

    cout << "Printing the array now" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

    //heap sort
    heapSort(arr,n);
    cout << "After sorting the array would be" << endl;
    for(int i=1;i<=n;i++)
    {
        cout << arr[i] << " "; 
    }cout << endl;
}