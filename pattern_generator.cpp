#include <iostream>
#include <string>
using namespace std;

void printMenu();
void generateRightTriangle(int height){
    cout << "Triangle" << endl;
    for (int i = 0; i < height; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void generatePyramid(int height){
    cout << "Pyramid" << endl;
    int row = 0;
    while (row < height){
        int space = 0;
        while (space < height - row - 1){
            cout << " ";
            space++;
        }
        int star = 0;
        while (star < 2 * row + 1){
            cout << "*";
            star++;
        }
        cout << endl;
        row++;
    }
}
void generateDiamond(int height){
    cout << "Diamond" << endl;
    int row = 0;
    do{
        int space = 0;
        do{
            cout << " ";
            space++;    
        }while (space < height - row);
        int star = 0;
        do{
            cout << "* ";
            star++;
        }while (star <= row);
        cout << endl;
        row++;
    }while (row < height);
    row = height - 2;
    do{
        int space = 0;
        do{
            cout << " ";
            space++;
        }while (space < height - row);
        int star = 0;
        do{
            cout << "* ";
            star++;
        }while (star <= row);
        cout << endl;
        row--;
    }while (row >= 0);
    
}

void generateNumberPattern(int height){
    cout << "Numbers" << endl;

    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for(int j = i - 1; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }   

}
void generateCustomPattern(int height){
    cout << "Custom" << endl;

    for(int i = 1; i <= height; i++){
        for(int j = 1; j <= height; j++){
            if(i != 1 && i != height && j != 1 && j != height){
                continue;
            }
            cout << "* ";
        }
        cout << endl;
    }
    cout << "Another Pattern" << endl;

    int i = 1;
    while(i <= height){
        for(int j = 1; j <= height - i; j++){
            cout << " ";
        }
        int j = 1;
        while(j <= 2 * i - 1){
            cout << j % 10;
            j++;
            if(j > 2 * i - 1){
                break;
            }
        }
        cout << endl;
        i++;
    }

}

int main(){

    bool exitProgram = false;
    while (!exitProgram){
        printMenu();
        int choice;
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        if (choice == 6){
            exitProgram = true;
            cout << "bye";
            continue;
        }
        int height;
        cout << "Choice (1-20): ";
        cin >> height;

        if (height < 1 || height > 20){
            cout << "Invalid";
            continue;
        }

        switch (choice){
            case 1:
                generateRightTriangle(height);
                break;
            
            case 2:
                generatePyramid(height);
                break;
            
            case 3:
                generateDiamond(height);
                break;
            case 4:
                generateNumberPattern(height);
                break;
            case 5:
                generateCustomPattern(height);
                break;
            default:
                cout << "Invalid" << endl;
        }
        cout << endl;
    }
    
    return 0;

}

void printMenu(){
    cout << "\nSelect" << endl;
    cout << "Triangle" << endl;
    cout << "Pyramid" << endl;
    cout << "Diamond" << endl;
    cout << "Number Pattern" << endl;
    cout << "Custom Pattern" << endl;
    cout << "Exit" << endl;
}