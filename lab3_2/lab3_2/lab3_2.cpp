#include <iostream>
#include <vector>

struct matrix2D {
    std::vector<std::vector<int>> contents;

    void print() {
        std::cout << "Contents of the matrix:" << std::endl; 

        int rows = contents.size();
        int cols = contents[0].size();


        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                std::cout << contents[i][j] << " ";               
            }
            std::cout << std::endl;
        }
    }
};


int main()
{
    matrix2D a;
    matrix2D b;

    a.contents = { {1,2}, {4,5}, {7,8} };
    b.contents = { {9,8,7}, {6,5,4}, {3,2,1} };

    a.print();
    b.print();

    return 0;
}

