// COMSC-210 | Lab 12 | Dainiz Almazan
// IDE used: CLion

#include <array>
#include <iostream>
#include <fstream>
using namespace std;

const int PLAYLIST_SIZE = 30;

int main(){
    // Reading data from playlist.txt
    array<string, PLAYLIST_SIZE> playlist;
    string tempSong;
    ifstream infile;
    infile.open("playlist_songs_only.txt");
    if (infile.good()) {
        for (int i = 0; i < PLAYLIST_SIZE; i++) {
            getline(infile, tempSong);
            playlist[i] = tempSong;
        }
    }
    else
        cout << "Error opening file" << endl;

    // Outputting the size of the array
    cout << "The number of songs in the playlist is: " << playlist.size() << endl;

    // Outputting data from playlist array
    cout << "Playlist contents:" << endl;
    for (const auto & song : playlist) {
        cout << song << endl;
    }

    // Outputting specific songs from the playlist
    cout << "The first song in the playlist is: " << playlist.front() << endl;
    cout << "The last song in the playlist is: " << playlist.back() << endl;

    infile.close();

    return 0;
}