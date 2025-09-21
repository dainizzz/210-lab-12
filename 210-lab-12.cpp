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

// displaySongData() outputs the information from the SongData struct
// arguments: a SongData struct object
// returns: nothing
void displaySongData(SongData);

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

void displaySongData(SongData song) {

}