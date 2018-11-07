//Created by Jaino Vennatt and Carolyn Sheehy on 10/26/2018.
#include "song.h"
#include <iostream>
#include <string>
using namespace std;

    Song :: Song()
    {
        artist ="";
        title  ="";
        size   =0;

    }
    Song :: Song(string _artist, string _title, int _size)
    {
    artist =_artist;
    title  =_title;
    size   =_size;

    }

    string Song ::getTitle() const
    {
        return title;
    }

    string Song ::getArtist() const
    {
        return artist;
    }

    int Song ::getSize()  const
    {
        return size;
    }

    void Song::setTitle(string _title) {
        title=_title;
    }

    void Song ::setArtist(string _artist) {
        artist=_artist;

    }

    void Song ::setSize(int _size) {
        size=_size;
    }

    bool Song::operator ==(Song const &rhs){
        return  (title==rhs.title &&
                 artist==rhs.artist &&
                 size==rhs.size);
    }

bool Song :: operator < (Song const &rhs) {
    if (artist != rhs.artist) {
        if (artist < rhs.artist) {
            return (true);
        }
        else {
            return false;
        }
    }

    else if (title != rhs.title) {
        if (title < rhs.title) {
            return (true);
        }
        else {
            return false;
        }
    }
    else if (size != rhs.size) {
        if (size < rhs.size) {
            return (true);
        }
        else {
            return false;
        }
    }
    return (false);
}

bool Song :: operator > (Song const &rhs) {
    if (artist != rhs.artist) {
        if (artist > rhs.artist) {
            return (true);
        }
        else {
            return false;
        }
    }

    else if (title != rhs.title) {
        if (title > rhs.title) {
            return (true);
        }
        else {
            return false;
        }
    }
    else if (size != rhs.size) {
        if (size > rhs.size) {
            return (true);
        }
        else {
            return false;
        }
    }
    return (false);
}
