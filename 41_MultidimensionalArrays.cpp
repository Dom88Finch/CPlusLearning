#include <iostream>
#include <cmath>

int main() {


    // Multidimensioal array = 2D arrays

    std::string films[3][3] = {{"Assasin Creed", "Call of Duty", "Game of Thrones"},
                              {"Batman", "Shazam", "Superman"},
                              {"Thor", "Iron Man", "Watchmen" }};

    std::cout << films[0][1] << " ";


    // displaying full array 
    int rows = sizeof(films)/sizeof(films[0]);
    int columns = sizeof(films[0])/sizeof(films[0][0]);

    for(int i=0; i < rows; i++){
        std::cout << '\n';
        for(int j=0; j<columns; j++){
            std::cout << films[i][j] << " ";

        }
    }




    return 0;
}