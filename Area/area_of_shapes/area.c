# include <stdio.h>

//function prototypes
int Area_r(int length, int width);
int Area_s(int length);
int Area_t(int height, int base);
float Area_c(float radius);
int main(void)
{
    int L,W, H, B; //length, width, height, radius
    float R, Area4;
    int Area1, Area2,Area3;
    int choice;

    printf("Select the shape to calculate the area.\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Triangle\n");
    printf("4. Circle\n");
    printf("Enter your choice (1,2,3,4): ");
    scanf("%d", &choice);

    //handle users choice
    switch(choice){
        case 1: //rectangle
            printf("Enter the length and the width: \n");
            scanf("%d %d", &L, &W);
            if(L<=0 || W<=0)
            {
                printf("Error the dimensions are not valid to caluclate the area!!");
                return 1;
            }

            Area1 = Area_r(L, W);
            printf("The area of the rectangle is: %d\n", Area1);
            break;

        case 2: //square
            printf("Enter the length of each side of the square: \n");
            scanf("%d", &L);
            if(L<=0)
            {
                printf("Error the dimensions are not valid to caluclate the area!!");
                return 1; //error
            }

            Area2 = Area_s(L);
            printf("The area of the square is: %d\n", Area2);
            break;
        case 3: //triangle
            printf("Enter the height and base of the triangle: \n");
            scanf("%d %d", &H, &B);
            if(H<=0 || B<=0)
            {
                printf("Error the dimensions are not valid to caluclate the area!!");
                return 1; //error
            }

            Area3= Area_t(H, B);
            printf("The area of the triangle is: %d\n", Area3);
            break;
        case 4: //circle
            printf("Enter the radius of the circle: \n");
            scanf(".2%f", &R);
            if(R<=0)
            {
                printf("Error the dimensions are not valid to caluclate the area!!\n");
                return 1; //error
            }

            Area4 = Area_c(R);
            printf("The  area of the circle is: .2%f\n", Area4);
            break;
        default: 
            printf("Invalid choice !!\n");
            return 1;
    }

    return 0;
}


//function definations based on the funcion prototypes
int Area_r(int length, int width){
    
    int rect_area = length * width;
    return rect_area;
};
int Area_s(int length){
    int square_area = length * length;
    return square_area;
};

int Area_t(int height, int base){
    int triangle_area = (height * base) / 2;
    return triangle_area;
};

float Area_c(float radius){
    float pie =3.142;
    float circle_area = pie * radius *radius;
    return circle_area;
};
