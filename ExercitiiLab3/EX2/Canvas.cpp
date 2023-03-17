#include "Canvas.h"
#include <iostream>
#include <math.h> 


Canvas::Canvas(int width, int height)
{
    this->width = width;
    this->height = height;
    this->matrice = new char*[height];
    for (int i = 0; i < height; i++)
        matrice[i] = new char[width];
}

void Canvas::DrawCircle(int x, int y, int ray, char ch){
     for (int i = x - ray; i <= x + ray; i++)
        for (int j = y - ray; j <= y + ray; j++)
            if (ray * ray > (i - x) * (i - x) + (j - y) * (j - y))
                matrice[i][j] = ch;
    FillCircle(x,y,ray-1,' ');
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    for (int i = x - ray; i <= x + ray; i++)
        for (int j = y - ray; j <= y + ray; j++)
            if (ray * ray > (i - x) * (i - x) + (j - y) * (j - y))
                matrice[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch){
    for(int i=top; i<=bottom; i++)
        for(int j=left; j<=right; j++)
            matrice[i][j] = ch;
    FillRect(left+1, top+1, right-2, bottom-1, ' ');
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch){
    for(int i=top; i<=bottom; i++)
        for(int j=left; j<=right; j++)
            matrice[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
    matrice[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch){
     int m = (y2 - y1) / (x2 - x1);
 
    for (int x = x1; x <= x2; x++) {
        int y = round(m*x);
        matrice[x][y] = ch;
    }
}

void Canvas::Print()
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
            std::cout << matrice[i][j];
        std::cout << '\n';
    }
}

void Canvas::Clear()
{
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            matrice[i][j] = ' ';
}