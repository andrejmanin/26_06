#include "../headers/homework.h"

#include <iostream>
#include <cstring>
#include <map>

using std::endl;
using std::cout;

void change_w(char* text, const char* word, const char* word_c, const int size) {
    char* t = new char[size * 2];
    const int size_w_1 = strlen(word);
    const int size_w_2 = strlen(word_c);

    int text_i = 0;
    for(int i = 0; text_i < size; i++, text_i++) {
        if(text[text_i] == word[0]) {
            bool is_find = true;
            for(int j = 0; j < size_w_1; j++) {
                if(text[text_i + j] != word[j]) {
                    is_find = false;
                    break;
                }
            }
            if(is_find) {
                for(int j = 0; j < size_w_2; j++) {
                    t[i++] = word_c[j];
                }
                text_i += size_w_1;
            }
        }
        t[i] = text[text_i];
    }

    cout << t << endl;
    delete[] t;
}

void upper_s(const char* text, const int size) {
    char* t = new char[size];
    int index = 0;
    for(int i = 0; i < size; i++) {
        if(text[i] == '.' || text[i] == '?' || text[i] == '!') {
            if(t[index] >= 'a' && t[index] <= 'z') {
                t[index] -= 32;
            }
            if(i + 2 < size) {
                index = i + 2;
            }

        }
        t[i] = text[i];
    }

    cout << t << endl;
    delete[] t;
}

void letters_v_1(const char* text, int size) {
    char lett[] {"ABCDEFGHIGKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    int nums[] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(lett[j] == text[i]) {
                nums[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < 52; i++) {
        cout << lett[i] << ": " << nums[i] << endl;
    }
}

void letters_v_2(const char* text, int size) {
    std::map<char, int> count {
        {'a', 0},
        {'b', 0},
        {'c', 0},
        {'d', 0},
        {'e', 0},
        {'f', 0},
        {'g', 0},
        {'h', 0},
        {'i', 0},
        {'j', 0},
        {'k', 0},
        {'l', 0},
        {'m', 0},
        {'n', 0},
        {'o', 0},
        {'p', 0},
        {'q', 0},
        {'r', 0},
        {'s', 0},
        {'t', 0},
        {'u', 0},
        {'v', 0},
        {'w', 0},
        {'x', 0},
        {'y', 0},
        {'z', 0},
        {'A', 0},
        {'B', 0},
        {'C', 0},
        {'D', 0},
        {'E', 0},
        {'F', 0},
        {'G', 0},
        {'H', 0},
        {'I', 0},
        {'J', 0},
        {'K', 0},
        {'L', 0},
        {'M', 0},
        {'N', 0},
        {'O', 0},
        {'P', 0},
        {'Q', 0},
        {'R', 0},
        {'S', 0},
        {'T', 0},
        {'U', 0},
        {'V', 0},
        {'W', 0},
        {'X', 0},
        {'Y', 0},
        {'Z', 0},
    };
    for(int i = 0; i < size; i++) {
        for(auto [key, value] : count) {
            if(key == text[i]) {
                count[key]++;
                break;
            }
        }
    }
    for(auto [key, value] : count) {
        cout << "[ " << key << " ] = " << value << endl;
    }
}

void nums_v_1(const char* text, int size) {
    int num[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int nums[] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < 10; j++) {
            if(num[j] + '0' == text[i]) {
                nums[j]++;
                break;
            }
        }
    }
    for(int i = 0; i < 10; i++) {
        cout << num[i] << ": " << nums[i] << endl;
    }
}

void nums_v_2(const char* text, int size) {
    std::map<int, int> count {
        {0, 0},
        {1, 0},
        {2, 0},
        {3, 0},
        {4, 0},
        {5, 0},
        {6, 0},
        {7, 0},
        {8, 0},
        {9, 0},
    };

    for(int i = 0; i < size; i++) {
        for(auto [key, value] : count) {
            if(key + '0' == text[i]) {
                count[key]++;
                break;
            }
        }
    }
    for(auto [key, value] : count) {
        cout << "[ " << key << " ] = " << value << endl;
    }
}

void funk(char* text, int size) {
    // char word[] {"Hello"};
    // char word_2[] {"Hi"};
    // change_w(text, word, word_2, size);
    // cout << text << endl;

    //upper_s(text, size);
    // letters_v_1(text, size);
    //letters_v_2(text, size);
    // nums_v_1(text, size);
    // nums_v_2(text, size);
    // cout << text;
}
