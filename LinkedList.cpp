#include<iostream>
#include<string.h>
using namespace std;

class Node {
    public:
        int noMhs;
        Node *next;
};

class List{
    Node *START;

    public:
        List(){
            START = NULL;
        }

        void addNode(){
            int nim;
            cout << "\nMasukkan Nomor Mahasiswa : ";
            cin >> nim;

            Node *nodebaru = new Node;
            nodebaru -> noMhs = nim;

            if (START==NULL || nim <= START->noMhs){
                if ((START != NULL) && (nim == START->noMhs)){
                    cout<< "\nDuplikasi noMhs tidak diizinkan\n";
                    return;
                }
                nodebaru->next = START;
                START = nodebaru;
                return;
            }
            Node *previous = START;
            Node *current = START;

            while ((current != NULL) && (nim >= current->noMhs))
            {
                if (nim == current->noMhs)
                {
                    cout<< "\nDuplikasi noMhs tidak diizinkan\n";
                    return;
                }

                previous = current;
                current = current->next;    
            }
            nodebaru -> next = current;
            previous -> next = nodebaru;
            
        }
        bool listEmpty(){
            return (START == NULL);
        }
        bool Search (int nim, Node **previous, Node **current){
            *previous = START;
            *current = START;

            while ((*current != NULL)&&(nim != (*current)->noMhs) )
            {
                *previous = *current;
                *current = (*current) -> next;
            }
            return (*current != NULL);
        }

        bool delNode(int nim){
            Node *current, *previous;
            if (!Search(nim, &previous, &current))
                return false;
            if (current==START)
                START = START -> next;
            else
                previous->next = current -> next;
            delete current;
            return true;
        }

        void traverse (){
            if (listEmpty())
            {
                cout << "\nList Kosong\n";
            }
            else{
                cout << "\nData Di dalam list adalah : ";
                Node *currentNode = START;
                while (currentNode != NULL)
                {
                    cout<< currentNode->noMhs << endl;
                    currentNode = currentNode->next;
                }
                cout << endl;
            }
            
        }
};

int main (){
    List mhs;
    int nim;
    char ch;
    while (1)
    {
        cout << "Menu" << endl;
        cout << endl;
        cout << "1. Menambah data ke dalam list\n";
        cout << "2. Menghapus data dari dalam list\n";
        cout << "3. Menampilkan semua data di dalam list\n";
        cout << "4. Mencari data dalam list\n";
        cout << "5. Keluar\n";
        cout << ""

    }
    
}