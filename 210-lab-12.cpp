// COMSC-210 | Lab 12 | Dainiz Almazan
// IDE used: CLion

#include <array>
#include <iostream>
#include <fstream>
using namespace std;

const int PLAYLIST_SIZE = 30;


// // TODO: Might be better to remove struct and just do song titles for sake of simplicity
// struct SongData {
//     string title;
//     string artist;
// };

// TODO: Should this be a function or just go in main???
// displayPlaylist() outputs the all songs from an array of SongData struct objects
// arguments: an array of SongData struct objects of size PLAYLIST_SIZE
// returns: nothing
void displayPlaylist(array<string, PLAYLIST_SIZE>&);

int main(){
    // Reading data from playlist.txt
    string tempSong;
    ifstream infile;
    infile.open("playlist.txt");

    if (infile.good()) {
        array<string, PLAYLIST_SIZE> playlist;
        infile.ignore();
        for (int i = 0; i < PLAYLIST_SIZE; i++) {
            getline(infile, tempSong);
            playlist[i] = tempSong;
        }
    }
    else
        cout << "Error opening file" << endl;

    infile.close();

    return 0;
}

// Passing by constant reference
void displayPlaylist(array<string, PLAYLIST_SIZE>&) {


}