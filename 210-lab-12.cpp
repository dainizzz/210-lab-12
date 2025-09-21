// COMSC-210 | Lab 12 | Dainiz Almazan
// IDE used: CLion

#include <array>
#include <iostream>
#include <fstream>
using namespace std;

const int PLAYLIST_SIZE = 30;

int main(){
    // Initializing array
    array<string, PLAYLIST_SIZE> playlist;
    cout << "The playlist is currently ";
    if (playlist.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    // Reading data from playlist.txt
    cout << "Reading data from file...";
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

    cout << "The playlist is currently ";
    if (playlist.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    // Outputting the size of the array
    cout << "The number of songs in the playlist is: " << playlist.size() << endl;

    // Outputting data from playlist array
    cout << "Playlist contents:" << endl;
    for (const auto & song : playlist) {
        cout << song << endl;
    }

    cout << "The playlist is currently ";
    if (playlist.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    // Outputting specific songs from the playlist
    cout << "The first song in the playlist is: " << playlist.front() << endl;
    cout << "The last song in the playlist is: " << playlist.back() << endl;
    cout << "The 20th song in the playlist is: " << playlist.at(19) << endl;

    infile.close();

    return 0;
}