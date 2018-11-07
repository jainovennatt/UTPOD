//Created by Jaino Vennatt and Carolyn Sheehy on 10/26/2018.
#include <iostream>
#include <string>
#include "UtPod.h"
#include "song.h"
#include <time.h>
#include <cstdlib>



using namespace std;

UtPod ::UtPod() {
    songs = NULL;
    memSize = MAX_MEMORY;
}                         //done

UtPod ::UtPod(int size) {
    if ((size<=0) || (size>MAX_MEMORY)) {
        memSize = MAX_MEMORY;
        songs = NULL;
    }
    else{
        memSize = size;
        songs = NULL;
    }
}                 //done

int UtPod ::addSong(Song const &s) {
    if (getRemainingMemory() >= s.getSize()) {
        SongNode *temp = new SongNode;
        temp->s = s;
        temp->next = songs;
        songs = temp;
        return(SUCCESS);
    }
    else{
        return (NO_MEMORY);
    }
}      //done

int UtPod ::removeSong(Song const &s) {
    SongNode *previous = NULL;
    SongNode *current = songs;

    if (current == NULL){
        return NOT_FOUND;
    }

    if (current->s == s) {
        songs = current->next;
        delete (current);
        return (SUCCESS);
    }

    else{
        previous = current;
        current = previous->next;

        while (current != NULL){
            if (current->s == s){
                previous->next = current->next;
                delete (current);
                return (SUCCESS);
            }

            else{
                previous = previous->next;
                current = current->next;
            }
        }
    }
    return (NOT_FOUND);
}   //done

int UtPod ::swapSong(SongNode *a,SongNode *b){
    SongNode temp;
    temp.s=a->s;
    a->s=b->s;
    b->s=temp.s;


} //done

void UtPod ::shuffle() {
    SongNode *current =songs;
    SongNode *iterate;

    int numSongs=0;
    time_t timer;

    if(current== NULL|| current->next == NULL){
        return;
    }
    while(current != NULL){
        numSongs=numSongs+1;
        current=current->next;
    }

    srand(time(&timer));
    current=songs;
    for(int i=0; i<615;i++){
        int value=(rand() % numSongs);
        int value1=(rand() % numSongs);
        current=songs;
        iterate=songs;

        for(int i=0;i<value;i++){
            current=current->next;

        }
        for(int i=0;i<value1;i++){
            iterate=iterate->next;

        }
        swapSong(current,iterate);

    }

}

void UtPod ::showSongList() {
    SongNode *current = songs;



    if (songs != NULL){
        songs=songs->next;
        showSongList();
        cout << current->s.getTitle() << "," << current->s.getArtist() << "," << current->s.getSize() << "MB" <<endl;

    }
    songs=current;

    }            //done

void UtPod ::sortSongList() {
    SongNode *current = songs;

    if (current == NULL){
        return;
    }

    SongNode *moving = songs->next;
    if (moving == NULL){
        return;
    }


    while (current != NULL) {
        while (moving != NULL){
            if (moving->s > current->s) {
                swapSong(current,moving);
                moving = current->next;

            } else {
                moving = moving->next;
            }
        }
        current = current->next;
        moving = current->next;
        if (moving == NULL) {
            return;
        }
    }
}     //done

void UtPod ::clearMemory() {
    while(songs != NULL){
        SongNode *current=songs;
        songs= songs->next;
        delete (current);
    }


}           //done

int UtPod :: getRemainingMemory() {
    int memUsed = 0;
    int remaining = memSize;
    SongNode *current = songs;

    if (current == NULL){
        return (remaining);
    }

    while (current->next != NULL){
        memUsed = memUsed + current->s.getSize();
        current = current->next;
    }

    memUsed = memUsed + current->s.getSize();
    remaining = memSize - memUsed;
    return (remaining);
}     //done

int UtPod ::getTotalMemory() {
    return(memSize);
}

UtPod ::~UtPod() {
clearMemory();
}                      // done
