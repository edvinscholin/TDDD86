// This is the .h file you will edit and turn in.
// We have provided a minimal skeleton for you,
// but you must finish it as described in the spec.
// Also remove these comments here and add your own, as well as on the members.
// TODO: remove this comment header and replace it with your own

#ifndef _boggle_h
#define _boggle_h

#include <iostream>
#include <string>
#include <set>
#include <grid.h>
#include <lexicon.h>
#include <vector>
#include <utility>
// TODO: include any other header files you need

using namespace std;

class Boggle {
public:
    const string DICTIONARY_FILE = "EnglishWords.dat";
    const int MIN_WORD_LENGTH = 4;
    const int BOARD_SIZE = 4;

    // TODO: decide the public member functions and declare them
    Boggle();

    /*
     * Creates board using the lexicon
     */
    Boggle(string& playerChosenBoard);

    //Boggle(const Lexicon& dict);

    void createBoard(string& playerChosenBoard);

    void createBoard();

    Grid<string>& getBoard();

    bool validWord(string word);

    bool findWordInBoard(string word, set<int[2]> visited, int row, int col);

    void findAllWordsHelper(set<pair<int, int>>& visited, int row, int col, string& possibleWord, set<string>& foundWords);

    set<string> findAllWords();


private:
    // TODO: decide the private member variables/functions and declare them
//    vector<string> boggleCubes = {"AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS", "AOOTTW",
//                                  "CIMOTU", "DEILRX", "DELRVY", "DISTTY", "EEGHNW",
//                                  "EEISNU", "EHRTVW", "EIOSST", "ELRTTY", "HIMNQU"
//                                  "HLNNRZ"};
    Grid<string> board = Grid<string>(4,4);
    Lexicon dict;
    set<string> userChosenWords;
};

#endif
