//
//Created by Jaino Vennatt and Carolyn Sheehy on 10/26/2018.
//
#include <cstdlib>
#include <iostream>
#include "song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[])
{
    Song s1("Justin Bieber", "Baby", 15);
    Song s2("Frank Sinatra", "My Way", 17);
    Song s3("Billy Joel", "Vienna", 11);
    Song s4("ABBA", "Mama Mia", 20);
    Song s5("Dean Martin", "Volare", 34);
    Song s6("Louis Armstrong", "What a Wonderful World", 16);
    Song s7("Michael Buble", "I Got It Easy", 23);
    Song s8("Wayne Newton", "Danke Schoen", 45);
    Song s9("Elvis Presley", "Can't Help Falling in Love", 32);
    Song s10("Duke Ellington", "Mood Indigo", 21);
    Song s11("Leon Bridges", "River", 512);
    Song s12("Billy Joel", "Uptown Girl", 256);






    cout <<endl <<"*********************UtPod Declaration Tests- 3 Tests**********************************"<<endl;
    UtPod t;
    cout <<"UtPod T declared with standard constructor"<<endl;
    UtPod s(256);
    cout <<"UtPod S declared with 256 MB"<<endl;
    UtPod x(999);
    cout << "UtPod X declared with memory over max: should go to 512 MB"<<endl<<endl;



    cout <<endl <<"*********************Total Memory Tests- 3 Tests**********************************"<<endl;
    cout <<"Total memory of UtPod T is " <<t.getTotalMemory()<<endl;
    cout <<"Total memory of UtPod S is " << s.getTotalMemory()<<endl;
    cout <<"Total memory of UtPod X is " << x.getTotalMemory()<<endl<<endl;


    cout <<endl <<"*********************Add Songs for Default UtPod**********************************"<<endl;
    cout<<"last songs is too big and should return a -1"<<endl;
    int result = t.addSong(s1);
    cout << "result = " << result << endl;
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    cout<<endl<<"Add song 3 twice to check if possible, return 0 if successful"<<endl;
    result = t.addSong(s3);
    cout << "result = " << result << endl <<endl;

    result = t.addSong(s4);
    cout << "result = " << result << endl;
    result = t.addSong(s5);
    cout << "result = " << result << endl;
    result = t.addSong(s6);
    cout << "result = " << result << endl;
    result = t.addSong(s7);
    cout << "result = " << result << endl;
    result = t.addSong(s8);
    cout << "result = " << result << endl;
    result = t.addSong(s9);
    cout << "result = " << result << endl;
    result = t.addSong(s10);
    cout << "result = " << result << endl;
    result = t.addSong(s11);
    cout << "result = " << result << endl;

    cout <<endl <<"*********************Add Songs for Size Parameter UtPod**********************************"<<endl;
    cout<<"last songs is too big and should return a -1 otherwise if successful a 0 is printed"<<endl;
    result = s.addSong(s1);
    cout << "result = " << result << endl;
    result = s.addSong(s2);
    cout << "result = " << result << endl;
    result = s.addSong(s3);
    cout << "result = " << result << endl;

    cout<<endl<<"Add song 3 twice to check if possible, return 0 if successful"<<endl;
    result = s.addSong(s3);
    cout << "result = " << result << endl<< endl;

    result = s.addSong(s4);
    cout << "result = " << result << endl;
    result = s.addSong(s5);
    cout << "result = " << result << endl;
    result = s.addSong(s6);
    cout << "result = " << result << endl;
    result = s.addSong(s7);
    cout << "result = " << result << endl;
    result = s.addSong(s8);
    cout << "result = " << result << endl;
    result = s.addSong(s9);
    cout << "result = " << result << endl;
    result = s.addSong(s10);
    cout << "result = " << result << endl;
    result = s.addSong(s11);
    cout << "result = " << result << endl;

    cout <<endl <<"*********************Show Song List for Not Empty UtPod-Default and Not Empty UtPod-SizeParameter*******************"<<endl;

    cout <<endl<<"UtPod Default"<<endl;
    t.showSongList();
    cout << endl<<endl<<"UtPod Size"<<endl;
    s.showSongList();

    cout <<endl <<"*********************Clear Memory for Not Empty UtPod-Default and Not Empty UtPod-SizeParameter*******************"<<endl;

    cout <<endl<<"Clear Memory for UtPod-Default and then Show Song list should display nothing"<<endl;
    cout <<"Also proves Show Song list can display empty Ut Pod"<<endl;
    t.clearMemory();
    t.showSongList();

    cout <<endl<<"Clear Memory for UtPod-Size and then Show Song list should display nothing"<<endl;
    cout <<"Also proves Show Song list can display empty Ut Pod"<<endl;
    s.clearMemory();
    s.showSongList();

    cout <<endl <<"*********************Clear Memory for  Empty UtPod-Default and Empty UtPod-SizeParameter*******************"<<endl;

    cout <<endl<<"Clear Memory for UtPod-Default and then Show Song list should display nothing"<<endl;
    t.clearMemory();
    t.showSongList();

    cout <<endl<<"Clear Memory for UtPod-Size and then Show Song list should display nothing"<<endl;
    s.clearMemory();
    s.showSongList();

    cout <<endl <<"*********************Get Remaining Memory*******************"<<endl;

    cout <<endl<<"Get Remaining Memory for Empty UtPod-Default- Should Be 512"<<endl;
    result=t.getRemainingMemory();
    cout<<result;

    cout <<endl<<"Get Remaining Memory for Empty UtPod-Size- Should Be 256"<<endl;
    result=s.getRemainingMemory();
    cout<<result;

    cout <<endl<<endl<<"Add Song with value of 11Mbs and get Remaining memory to UtPod-Default"<<endl<<endl;
    t.addSong(s3);
    t.showSongList();

    cout <<"Get Remaining Memory for filled UtPod-Default- Should Be 501"<<endl;
    result=t.getRemainingMemory();
    cout<<result;

    cout <<endl<<endl<<"Add Song with value of 11Mbs and get Remaining memory to UtPod-Size"<<endl<<endl;
    s.addSong(s3);
    s.showSongList();

    cout <<"Get Remaining Memory for filled UtPod-Size- Should Be 245"<<endl;
    result=s.getRemainingMemory();
    cout<<result;

    cout<<endl<<endl<<"******UtPod-Default cleared"<<endl;
    cout<<"******UtPod-Size cleared"<<endl;
    t.clearMemory();
    s.clearMemory();


    cout <<endl<<endl<<"Add Song with value of 512 Mbs and get Remaining memory to UtPod-Default"<<endl<<endl;
    t.addSong(s11);
    t.showSongList();

    cout <<"Get Remaining Memory for Full UtPod-Default- Should Be 0"<<endl;
    result=t.getRemainingMemory();
    cout<<result;

    cout <<endl<<endl<<"Add Song with value of 256Mbs and get Remaining memory to UtPod-Size"<<endl<<endl;
    s.addSong(s12);
    s.showSongList();

    cout <<"Get Remaining Memory for Full UtPod-Size- Should Be 0"<<endl;
    result=s.getRemainingMemory();
    cout<<result;

    cout <<endl <<"*********************Sort for  UtPod-Default and UtPod-SizeParameter*******************"<<endl;
    t.clearMemory();
    s.clearMemory();


    cout <<"Sort Empty UtPod- Default to show it doesn't crash"<<endl;
    cout <<"Sort Empty UtPod- Size to show it doesn't crash"<<endl;
    t.sortSongList();
    s.sortSongList();

    cout <<endl<<"Put songs in UtPod-Default and Ut-Pod-Size to Sort "<<endl;

    result = t.addSong(s1);
    cout << "result = " << result << endl;
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    result = t.addSong(s3);
    cout << "result = " << result << endl;
    result = t.addSong(s4);
    cout << "result = " << result << endl;
    result = t.addSong(s5);
    cout << "result = " << result << endl;
    result = t.addSong(s6);
    cout << "result = " << result << endl;
    result = t.addSong(s7);
    cout << "result = " << result << endl;
    result = t.addSong(s8);
    cout << "result = " << result << endl;
    result = t.addSong(s9);
    cout << "result = " << result << endl;
    result = t.addSong(s10);
    cout << "result = " << result << endl<<endl;


    result = s.addSong(s1);
    cout << "result = " << result << endl;
    result = s.addSong(s2);
    cout << "result = " << result << endl;
    result = s.addSong(s3);
    cout << "result = " << result << endl;
    result = s.addSong(s4);
    cout << "result = " << result << endl;
    result = s.addSong(s5);
    cout << "result = " << result << endl;
    result = s.addSong(s6);
    cout << "result = " << result << endl;
    result = s.addSong(s7);
    cout << "result = " << result << endl;
    result = s.addSong(s8);
    cout << "result = " << result << endl;
    result = s.addSong(s9);
    cout << "result = " << result << endl;
    result = s.addSong(s10);
    cout << "result = " << result << endl;

    cout<<endl<<"display UtPod-Default and UtPod-Size"<<endl<<endl;
    t.showSongList();
    cout<<endl;
    s.showSongList();

    cout<<endl<<endl;
    cout<<endl<<"sort UtPod-Default and UtPod-Size"<<endl<<endl;
    t.sortSongList();
    t.showSongList();
    cout<<endl;
    s.sortSongList();
    s.showSongList();

    cout<<endl<<endl;
    cout<<endl<<"sort sorted UtPod-Default and UtPod-Size"<<endl<<endl;
    t.sortSongList();
    t.showSongList();
    cout<<endl;
    s.sortSongList();
    s.showSongList();


    cout <<endl <<"*********************Shuffle for  UtPod-Default and UtPod-SizeParameter*******************"<<endl;
    t.clearMemory();
    s.clearMemory();

    cout <<"Shuffle Empty UtPod- Default to show it doesn't crash"<<endl;
    cout <<"Shuffle Empty UtPod- Size to show it doesn't crash"<<endl;
    t.shuffle();
    s.shuffle();

    cout <<endl<<"Put songs in UtPod-Default and Ut-Pod-Size and Sort so you can Shuffle and Verify "<<endl;

    result = t.addSong(s1);
    cout << "result = " << result << endl;
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    result = t.addSong(s3);
    cout << "result = " << result << endl;
    result = t.addSong(s4);
    cout << "result = " << result << endl;
    result = t.addSong(s5);
    cout << "result = " << result << endl;
    result = t.addSong(s6);
    cout << "result = " << result << endl;
    result = t.addSong(s7);
    cout << "result = " << result << endl;
    result = t.addSong(s8);
    cout << "result = " << result << endl;
    result = t.addSong(s9);
    cout << "result = " << result << endl;
    result = t.addSong(s10);
    cout << "result = " << result << endl<<endl;


    result = s.addSong(s1);
    cout << "result = " << result << endl;
    result = s.addSong(s2);
    cout << "result = " << result << endl;
    result = s.addSong(s3);
    cout << "result = " << result << endl;
    result = s.addSong(s4);
    cout << "result = " << result << endl;
    result = s.addSong(s5);
    cout << "result = " << result << endl;
    result = s.addSong(s6);
    cout << "result = " << result << endl;
    result = s.addSong(s7);
    cout << "result = " << result << endl;
    result = s.addSong(s8);
    cout << "result = " << result << endl;
    result = s.addSong(s9);
    cout << "result = " << result << endl;
    result = s.addSong(s10);
    cout << "result = " << result << endl;

    cout<<endl<<"display sorted UtPod-Default and UtPod-Size"<<endl<<endl;
    t.sortSongList();
    s.sortSongList();
    t.showSongList();
    cout<<endl;
    s.showSongList();

    cout<<endl<<endl;
    cout<<endl<<"shuffle UtPod-Default and UtPod-Size"<<endl<<endl;
    t.shuffle();
    t.showSongList();
    cout<<endl;
    s.shuffle();
    s.showSongList();

    cout<<endl<<endl;
    cout<<endl<<"shuffle shuffled UtPod-Default and UtPod-Size"<<endl<<endl;
    t.shuffle();
    t.showSongList();
    cout<<endl;
    s.shuffle();
    s.showSongList();

    cout<<endl << "END" ;
}