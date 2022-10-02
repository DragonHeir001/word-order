// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Driver code
int main()
{
    FILE* ptr;
    char ch;
    int char_a = 0;
    int char_b = 0;
    int char_c = 0;
    int char_d = 0;
    int char_e = 0;
    int char_f = 0;
    int char_g = 0;
    int char_h = 0;
    int char_i = 0;
    int char_j = 0;
    int char_k = 0;
    int char_l = 0;
    int char_m = 0;
    int char_n = 0;
    int char_o = 0;
    int char_p = 0;
    int char_q = 0;
    int char_r = 0;
    int char_s = 0;
    int char_t = 0;
    int char_u = 0;
    int char_v = 0;
    int char_w = 0;
    int char_x = 0;
    int char_y = 0;
    int char_z = 0;


    void sort(double* item_array) {
        for (int i = 0; i <5; i++) {
        }
    }

    ptr = fopen("harry.txt", "r");

    if (NULL == ptr) {
        printf("file can't be opened \n");
    }

    printf("content of this file are \n");

    while (ch != EOF) {
        ch = fgetc(ptr);
        //instead of print...
        //printf("%c\n", ch);
        if (ch == 'a') {
            char_a++;
        }
        if (ch == 'b') {
            char_b++;
        }
        if (ch == 'c') {
            char_c++;
        }
        if (ch == 'd') {
            char_d++;
        }
        if (ch == 'e') {
            char_e++;
        }
        if (ch == 'f') {
            char_f++;
        }
        if (ch == 'g') {
            char_g++;
        }
        if (ch == 'h') {
            char_h++;
        }
        if (ch == 'i') {
            char_i++;
        }
        if (ch == 'j') {
            char_j++;
        }
        if (ch == 'k') {
            char_k++;
        }
        if (ch == 'l') {
            char_l++;
        }
        if (ch == 'm') {
            char_m++;
        }
        if (ch == 'n') {
            char_n++;
        }
        if (ch == 'o') {
            char_o++;
        }
        if (ch == 'p') {
            char_p++;
        }
        if (ch == 'q') {
            char_q++;
        }
        if (ch == 'r') {
            char_r++;
        }
        if (ch == 's') {
            char_s++;
        }
        if (ch == 't') {
            char_t++;
        }
        if (ch == 'u') {
            char_u++;
        }
        if (ch == 'v') {
            char_v++;
        }
        if (ch == 'w') {
            char_w++;
        }
        if (ch == 'x') {
            char_x++;
        }
        if (ch == 'y') {
            char_y++;
        }
        if (ch == 'z') {
            char_z++;
        }
    }
    //printing
    if (char_a <= 1);{
    printf("a: %d\n", char_a);
    }
    if (char_b <= 1);{
    printf("b: %d\n", char_b);
    }
    if (char_c <= 1);{
    printf("c: %d\n", char_c);
    }
    if (char_d <= 1);{
    printf("d: %d\n", char_d);
    }
    if (char_e <= 1);{
    printf("e: %d\n", char_e);
    }
    if (char_f <= 1);{
    printf("f: %d\n", char_f);
    }
    if (char_g <= 1);{
    printf("g: %d\n", char_g);
    }
    if (char_h <= 1);{
    printf("h: %d\n", char_h);
    }
    if (char_i <= 1);{
    printf("i: %d\n", char_i);
    }
    if (char_j <= 1);{
    printf("j: %d\n", char_j);
    }
    if (char_k <= 1);{
    printf("k: %d\n", char_k);
    }
    if (char_l <= 1);{
    printf("l: %d\n", char_l);
    }
    if (char_m <= 1);{
    printf("m: %d\n", char_m);
    }
    if (char_n <= 1);{
    printf("n: %d\n", char_n);
    }
    if (char_o <= 1);{
    printf("o: %d\n", char_o);
    }
    if (char_p <= 1);{
    printf("p: %d\n", char_p);
    }
    if (char_q <= 1);{
    printf("q: %d\n", char_q);
    }
    if (char_r <= 1);{
    printf("r: %d\n", char_r);
    }
    if (char_s <= 1);{
    printf("s: %d\n", char_s);
    }
    if (char_t <= 1);{
    printf("t: %d\n", char_t);
    }
    if (char_u <= 1);{
    printf("u: %d\n", char_u);
    }
    if (char_v <= 1);{
    printf("v: %d\n", char_v);
    }
    if (char_w <= 1);{
    printf("w: %d\n", char_w);
    }
    if (char_x <= 1);{
    printf("x: %d\n", char_x);
    }
    if (char_y <= 1);{
    printf("y: %d\n", char_y);
    }
    if (char_z <= 1);{
    printf("z: %d\n", char_z);
    }

    //printf("%d\n", char_a, char_b, char_c, char_d, char_e, char_f, char_g, char_h, char_i, char_j, char_k, char_l, char_m, char_n, char_o, char_p, char_q, char_r, char_s, char_t, char_u, char_v, char_w, char_x, char_x, char_y, char_z );
    fclose(ptr);
    return 0;
}




