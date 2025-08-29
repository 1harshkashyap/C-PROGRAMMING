#include <stdio.h>

int main() {
    int a;
    int x1, x2, x3;
    int y1, y2, y3;

    printf("ENTER X COORDINATES: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    printf("ENTER Y COORDINATES: ");
    scanf("%d %d %d", &y1, &y2, &y3);

    a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (a == 0) {
        printf("POINTS ARE COLLINEAR\n");
    } else {
        printf("POINTS ARE NON COLLINEAR\n");
    }

    return 0;
}
