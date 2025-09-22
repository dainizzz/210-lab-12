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
    cout << "Checking if playlist is empty..." << boolalpha << playlist.empty() << endl;

    // Reading data from playlist.txt
    cout << "Reading data from file...";
    string tempSong;
    ifstream infile;
    infile.open("playlist.txt");
    if (infile.good()) {
        for (int i = 0; i < PLAYLIST_SIZE; i++) {
            getline(infile, tempSong);
            playlist[i] = tempSong;
        }
    }
    else
        cout << "Error opening file" << endl;
    infile.close();

    // Outputting the size of the array
    cout << "The number of songs in the playlist is: " << playlist.size() << endl;

    // Outputting data from playlist array
    cout << "Playlist contents:" << endl;
    for (const auto & song : playlist)
        cout << song << '\t';

    // Outputting specific songs from the playlist
    cout << "The first song in the playlist is: " << playlist.front() << endl;
    cout << "The last song in the playlist is: " << playlist.back() << endl;
    cout << "The 20th song in the playlist is: " << playlist.at(19) << endl;

    // Sorting playlist in order of ASCII decimal value
    sort(playlist.begin(), playlist.end());

    cout << "Sorted playlist:" << endl;
    for (const auto & song : playlist)
        cout << song << '\t';

    // Sorting in reverse ASCII decimal value order
    cout << "Reversed playlist:" << endl;
    sort(playlist.rbegin(), playlist.rend());
    for (const auto & song : playlist)
        cout << song << '\t';

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
    // Swapping the original playlist with the new playlist
    playlist.swap(paprikaPlaylist);
    cout << "The swapped playist now contains:" << endl;
    for (const auto & song : playlist)
        cout << song << '\t';

    return 0;
}