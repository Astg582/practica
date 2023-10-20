#include<iostream>

enum color{
    RED = 'a',
    BLUE = 'b',
    BLEACK = 'c',
    ORANGE = 'd',
    YRLLOW
};

struct pix{
    color col;
    int x_cord;
    int y_cord;
};

pix** M_aloc(int s);
void print(pix**, int);
void kes(pix**, int);
void sec_d(pix**, int);
void del(pix**, int);

int main()
{
    int s = 0;
    std::cout << "enter to size" << std::endl;
    std::cin >> s;
    pix** pixel = M_aloc(s);
    print(pixel, s);

    sec_d(pixel, s);
    std::cout << " this is sec_d revers image" << std::endl;
    print(pixel,s);
    
   // std::cout << sizeof(color) <<'\n'<< sizeof(pix) <<std::endl;
    
    del(pixel, s);
}

pix** M_aloc(int s)
{
    pix** pixel = new pix*[s];
    for(int i = 0; i < s; ++i)
    {
        pixel[i] = new pix[s];
    }

    for(int i = 0; i < s; ++i)
    {
        for(int j = 0; j < s; ++j)
        {
            pixel[i][j].x_cord = i;
            pixel[i][j].y_cord = j;
            pixel[i][j].col = (color) (97 + rand() % 5);
        }
    }

    return pixel;
}

void print (pix** pixel, int s)
{
    for(int i = 0; i < s; ++i)
    {
        for(int j  = 0; j < s; ++j)
        {
            std::cout << (char) pixel[i][j].col << ' ';
        }
        std::cout << std::endl;
    }
}

void kes(pix** pixel, int s)
{
    for(int i = 0; i < s; ++i)
    {
        for(int j = 0; j < s/2; ++j)
        {
            std::swap(pixel[i][j], pixel[i][s-j-1]);
        }
    }

}

void sec_d(pix** pixel, int s)
{
    for(int i = 0; i < s/2; ++i)
    {
        for(int j = 0; j < s; ++j)
        {
            std::swap(pixel[i][j], pixel[s-i-1][s-j-1]);
        }
    }
}

void del(pix** pixel, int s)
{
    for(int i = 0; i < s; ++i)
    {
        delete[] pixel[i];
    }
delete[] pixel;
}

