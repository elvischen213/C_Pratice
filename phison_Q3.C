#include<stdio.h>
#include<stdlib.h>

struct Liststruct{
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};

struct Liststruct Listarray[1000];
#define null 0xffff

unsigned int ListHead = 0;

void found_entry(unsigned int DataA,unsigned int DataB){

    unsigned int Entry1 = null;
    unsigned int Entry2 = ListHead;

    while (Entry2!=null){
        if(Listarray[Entry2].DataH==DataA && Listarray[Entry2].DataL==DataB){
            if(Entry2==ListHead)
                printf("Entry2= %d, Entry1=NULL\n", Entry2);
            else{
                if((Listarray[Entry2].DataH << 16) +Listarray[Entry2].DataL > (Listarray[Entry1].DataH << 16) +Listarray[Entry1].DataL)
                    printf("Entry2 = %d ,Entry1 = %d", Entry2, Entry1);
            }
        }
        else {
            Entry1 = Entry2;
            Entry2 = Listarray[Entry2].NextPtr;
        }
    }
}