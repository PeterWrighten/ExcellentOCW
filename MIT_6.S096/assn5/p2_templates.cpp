#include <stdio.h>

/*
    Your templated List class definition goes here.
*/



/*
    You shouldn't change the code below, unless you want to _temporarily_ change the main function while testing.
    Change it back when you're done.    
*/
typedef struct Point_ {
    int x;
    int y;
} Point;

int main(){
    List<int> integers(10);
    for(int i = 0; i < integers.length; i++){
        integers.set(i, i * 100);
        printf("%d ", integers.get(i));
    }
    printf("\n"); // this loop should print: 0 100 200 300 400 500 600 700 800 900 
    
    List<Point *> points(5);
    for(int i = 0; i < points.length; i++){
        Point * p = new Point;
        p->x = i * 10;
        p->y = i * 100;
        points.set(i, p);
        printf("(%d, %d) ", points.get(i)->x, points.get(i)->y);
        delete p;
    }
    printf("\n"); // this loop should print: (0, 0) (10, 100) (20, 200) (30, 300) (40, 400) 
}