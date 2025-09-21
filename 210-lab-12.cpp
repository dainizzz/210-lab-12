// COMSC-210 | Lab 12 | Dainiz Almazan
// IDE used: CLion

#include <algorithm>
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
    infile.close();

    cout << "The playlist is currently ";
    if (playlist.empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    // Outputting the size of the array
    cout << "The number of songs in the playlist is: " << playlist.size() << endl;

    // Outputting data from playlist array
    cout << "Playlist contents:" << endl;
    for (const auto & song : playlist)
        cout << song << endl;

    // Outputting specific songs from the playlist
    cout << "The first song in the playlist is: " << playlist.front() << endl;
    cout << "The last song in the playlist is: " << playlist.back() << endl;
    cout << "The 20th song in the playlist is: " << playlist.at(19) << endl;

    // Sorting playlist in order of ASCII decimal value
    sort(playlist.begin(), playlist.end());

    cout << "Sorted playlist:" << endl;
    for (const auto & song : playlist)
        cout << song << endl;

    // Sorting in reverse ASCII decimal value order
    cout << "Reversed playlist:" << endl;
    sort(playlist.rbegin(), playlist.rend());
    for (const auto & song : playlist)
        cout << song << endl;

    // Looking for specific song in playlist
    string target = "Dreams";
    array<string, PLAYLIST_SIZE>::iterator it;
    it = find(playlist.begin(), playlist.end(), target);
    cout << "The target song " << target;
    if (it != playlist.end())
        cout << " was found at position " << it - playlist.begin() << endl;
    else
        cout << " was not found" << endl;

    // Creating a new playlist filled with a specific song
    array<string, PLAYLIST_SIZE> paprikaPlaylist;
    fill(paprikaPlaylist.begin(), paprikaPlaylist.end(), "Paprika");

    return 0;
}