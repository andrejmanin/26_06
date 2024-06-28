#include "../headers/classwork.h"

#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

void show(char* text, int size) {
    for(int i = 0; i < size; i++) {
        cout << text[i];
    }
    cout << endl;
}

bool find(const char* text, const int size) {
    char* word = new char[100];
    cout << "Enter a word: ";
    std::cin.getline(word, 100);

    for(int i = 0; i < size; i++) {
        if(text[i] == word[0]) {
            bool is_find = false;
            int k = 1;
            for(; word[k] != '\0'; k++) {
                if(text[i + k] != word[k]) {
                    is_find = false;
                    break;
                }
                else {
                    is_find = true;
                }
            }
            if(is_find) {
                return true;
            }
            i += k;
        }

    }
    return false;
}

int sentence(const char* text, const int size) {
    int count = 0;
    for(int i = 0; i != size; i++) {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?') {
            if(i + 2 != size) {
                if(text[i + 1] == '.') {
                    if(text[i + 2] == '.'){
                        count++;
                        i += 2;
                    }
                    else {
                        i += 1;
                        continue;
                    }
                }
                else
                    count++;
            }
        }
    }
    return count;
}

void dot_and_com(char* text, int size) {
    int dot = 0, com = 0;
    for(int i = 0; i < size; i++) {
        if(text[i] == '.')
            dot++;
        else if(text[i] == ',')
            com++;
        else
            continue;
    }
    cout << "Dot: " << dot << endl;
    cout << "Com: " << com << endl;
}

void reverse(char* text, int size) {
    char* str = text;
    for(int i = 0, j = size - 1; i < j; i++, j--) {
        char symbol = str[i];
        str[i] = str[j];
        str[j] = symbol;
    }
    cout << str << endl;
}

void reverse_sent(char* text, int size) {
    int start = 0, end;
    char* str = text;
    for(int i = 0; i < size; i++) {
        if(str[i] == '.' || str[i] == '?' || str[i] == '!') {
            end = i;
            for(int j = start, k = end; j < k; j++, k--) {
                char symbol = text[j];
                text[j] = text[k];
                text[k] = symbol;
            }
            start = end + 1;
        }
    }
    cout << text << endl;
}

void task(char* text, int size) {
    show(text, size);
    // find(text, size) ? std::cout << "We found it." << endl : std::cout << "We can't found it." << endl;
    // cout << sentence(text, size) << endl;
    // dot_and_com(text, size);
    // reverse(text, size);
    // cout << text << endl;
    // reverse_sent(text, size);
}