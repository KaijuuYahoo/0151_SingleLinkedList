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

            while ((current != NULL) && (nim >))
            {
                /* code */
            }
            
        }
};