//
// Created by Jaino Vennatt and Carolyn Sheehy on 10/26/2018.
//

#ifndef SONG_H
#define SONG_H
#include <string>

using namespace std;

class Song {
private:
string title;
string artist;
int    size;

public:

    //Default constructor
    //set the song artist and title to empty and size to zero
Song();

    //Constructor with artist, title and size parameter
    //sets artist, title and size
Song(string _artist, string _title, int _size);


/* FUNCTION - string getArtist
     * returns name of artist

       input parms - song

       output parms - name of artist for selected song
    */
string getArtist() const;

/* FUNCTION - void setArtist
     * sets name of artist for song

       input parms - artist name

       output parms -
    */
void setArtist(string _artist);



/* FUNCTION - string getTitle
     * returns title for selected song

       input parms - song

       output parms - returns title
    */
string getTitle () const;

/* FUNCTION - void setTitle
     * sets title for song

       input parms - song name

       output parms -
    */
void setTitle(string _title);



/* FUNCTION - int getSize
     * returns size of selected song

       input parms - song

       output parms - size of selected song
    */
int getSize() const;

/* FUNCTION - void setSize
     * sets size for song

       input parms - song size

       output parms -
    */
void setSize(int _size);


/* FUNCTION - bool operator ==
     * compares song to rhs value. Overrides operator

       input parms - two songs to be compared

       output parms - true if equal, false if not equal
    */
bool operator ==(Song const &rhs);

/* FUNCTION - bool operator <
     * compares song to rhs value. Overrides operator

       input parms - two songs to be compared

       output parms - true less than, false if not less than
    */
bool operator <(Song const &rhs);

/* FUNCTION - bool operator >
     * compares song to rhs value. Overrides operator

       input parms - two songs to be compared

       output parms - true if greater than, false if not not greater than
    */
bool operator >(Song const &rhs);

};


#endif //PROGASSIGNMENT5_SONG_H