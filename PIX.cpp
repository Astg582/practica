#include<iostream>


enum color{
    RED = 'a',
    BLEAK ,
    WHITE,
    BLUE ,
    YELLOW,
    PINK,
    ORANGE
};

struct pixel{
    color col;
    int x_cord;
    int y_cord;
};

pixel** matr(int);
void print(pixel**, int);

int main()
{
 
 int s = 0;
 
 std::cout << " enter to size of pixels" << std::endl;
 std::cin >> s;

 pixel** img = matr(s);
 
 print(img, s);
  


  for(int i = 0; i < s; ++i)
    {
    delete[] img[i];
    }
    delete[] img;
}

pixel** matr(int s)
{
    pixel** img = new pixel*[s];
    for(int i = 0; i < s; ++i)
    {
        img[i] = new pixel[s];
    }

    for(int i = 0; i < s; ++i)
    {
        for(int j = 0; j < s; ++j)
        {
            img[i][j].x_cord = i;
            img[i][j].y_cord = j;
            img[i][j].col = (color) (rand() % 7 + 97);
        }
    }
    return img;
}

void print(pixel** pix, int s)
{
    for(int i = 0; i < s; ++i)
    {
        for(int j = 0; j < s; ++j)
        {
            std::cout << (char) pix[i][j].col << ' ';
        }
        std::cout << std::endl;
    }
}
