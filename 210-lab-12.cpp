// COMSC-210 | Lab 12 | Dainiz Almazan
// IDE used: CLion

#include <array>
#include <iostream>
#include <fstream>
using namespace std;

const int PLAYLIST_SIZE = 30;

struct SongData {
    string title;
    string artist;
};

// TODO: Should this be a function or just go in main???
// displayPlaylist() outputs the all songs from an array of SongData struct objects
// arguments: an array of SongData struct objects of size PLAYLIST_SIZE
// returns: nothing
void displayPlaylist(array<SongData, PLAYLIST_SIZE>&);

int main(){
    // Reading data from playlist.txt
    string tempArtist, tempSong;
    ifstream infile;
    infile.open("playlist.txt");

    if (infile.good()) {
        array<SongData, PLAYLIST_SIZE> playlist;
        infile.ignore();
        for (int i = 0; i < PLAYLIST_SIZE; i++) {
            // Arists and songs are on separate lines with artists before songs
            getline(infile, tempArtist);
            getline(infile, tempSong);
            playlist[i].artist = tempArtist;
            playlist[i].title = tempSong;
        }
    }
    else
        cout << "Error opening file" << endl;

    infile.close();

    return 0;
}

// Passing by constant reference
void displayPlaylist(array<SongData, PLAYLIST_SIZE>&) {


}