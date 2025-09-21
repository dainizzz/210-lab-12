// COMSC-210 | Lab 12 | Dainiz Almazan
// IDE used: CLion

#include <array>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Reading data from playlist.txt
    int numSongs;
    string tempArtist, tempSong;
    ifstream infile;
    infile.open("playlist.txt");

    if (infile.good()) {
        // The first line of the file contains the number of items that will be in the array i.e. songs in the playlist
        //infile >> numSongs;
        array<string, numSongs> playlist;


    }
    else
        cout << "Error opening file" << endl;

    infile.close();

    return 0;
}