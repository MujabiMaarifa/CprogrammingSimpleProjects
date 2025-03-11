# include <stdio.h>

int Area_r(int length, int width)
{
    int Rect_area = length * width;
    return (Rect_area);
}
int Area_s(int length)
{
    int Square_area = length * length;
    return (Square_area);
}
int main(void)
{
    int L,W, Area1, Area2;
    L =14;
    W = 6;

    Area1 = Area_r(L,W);
    Area2 = Area_s(L);

    printf("The area of the rectangle is: %d\n", Area1);
    printf("The area of the square is: %d ", Area2);
    return 0;
}
