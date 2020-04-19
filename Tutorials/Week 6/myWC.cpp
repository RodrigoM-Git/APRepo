#include <iostream>
#include <string>
#include <fstream>

int countLines(std::fstream& input);
int countCharacters(std::fstream& input);
int countWords(std::fstream& input);

int main(int argc, char* argv[]){

    if(argc == 3){
        std::string func = argv[1];
        std::string fileName = argv[2];
        int num = 0;

        std::fstream f(fileName);
        std::fstream& input = f;
        if(f.good()){
            if(func == "-l"){
                num = countLines(input);
            std::cout << "Number of lines in " << fileName << " is " << num << std::endl;
            }else if(func == "-c"){
                num = countCharacters(input);
                std::cout << "Number of characters in " << fileName << " is " << num << std::endl;
            }else if(func == "-w"){
                num = countWords(input);
                std::cout << "Number of words in " << fileName << " is " << num << std::endl;
            }else{
                std::cout << "Invalid function" << std::endl;
            }
        }else{
            std::cout << "Invalid file" << std::endl;
        }

        f.close();

        
    }else{
        std::cout << "No instructions given" << std::endl;
    }

    return EXIT_SUCCESS;
}

int countLines(std::fstream& input){
    std::string line;
    int lineCount = 0;

    while(!input.eof()){
        getline(input, line);
        lineCount++;
    }

    return lineCount;
}

int countCharacters(std::fstream& input){
    char c;
    int charCount = 0;

    while(!input.eof()){
        input.get(c);
        charCount++;
    }

    return charCount;
}

int countWords(std::fstream& input){
    std::string string;
    int wordCount = 0;

    while(!input.eof()){
        input >> string;
        wordCount++;
    }

    return wordCount;
}