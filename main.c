// C program to implement
// the above approach
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(double* item_array) {
    for (int i = 0; i < 5; i++) {
        printf("%d: %lf\n", i, item_array[i]);
    }
}

int get_min(int index, double* item_array) {
    double min = item_array[index];
    int min_index = index;
    for (int i = index + 1; i <5; i++) {
        if (item_array[i] < min) {
            min = item_array[i];
            min_index = i;
        }
    }
    return min_index;
}

void swap(double* item1, double* item2) {
        double temp = *item1;
        *item1 = *item2;
        *item2 = temp;
}

void sort(double* item_array) {
    for (int i = 0; i <5; i++) {
        swap(&item_array[i], &item_array[get_min(i, item_array)]);
    }
}

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

    int char_A = 0;
    int char_B = 0;
    int char_C = 0;
    int char_D = 0;
    int char_E = 0;
    int char_F = 0;
    int char_G = 0;
    int char_H = 0;
    int char_I = 0;
    int char_J = 0;
    int char_K = 0;
    int char_L = 0;
    int char_M = 0;
    int char_N = 0;
    int char_O = 0;
    int char_P = 0;
    int char_Q = 0;
    int char_R = 0;
    int char_S = 0;
    int char_T = 0;
    int char_U = 0;
    int char_V = 0;
    int char_W = 0;
    int char_X = 0;
    int char_Y = 0;
    int char_Z = 0;


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

        if (ch == 'A') {
            char_A++;
        }
        if (ch == 'B') {
            char_B++;
        }
        if (ch == 'C') {
            char_C++;
        }
        if (ch == 'D') {
            char_D++;
        }
        if (ch == 'E') {
            char_E++;
        }
        if (ch == 'F') {
            char_F++;
        }
        if (ch == 'G') {
            char_G++;
        }
        if (ch == 'H') {
            char_H++;
        }
        if (ch == 'I') {
            char_I++;
        }
        if (ch == 'J') {
            char_J++;
        }
        if (ch == 'K') {
            char_K++;
        }
        if (ch == 'L') {
            char_L++;
        }
        if (ch == 'M') {
            char_M++;
        }
        if (ch == 'N') {
            char_N++;
        }
        if (ch == 'O') {
            char_O++;
        }
        if (ch == 'P') {
            char_P++;
        }
        if (ch == 'Q') {
            char_Q++;
        }
        if (ch == 'R') {
            char_R++;
        }
        if (ch == 'S') {
            char_S++;
        }
        if (ch == 'T') {
            char_T++;
        }
        if (ch == 'U') {
            char_U++;
        }
        if (ch == 'V') {
            char_V++;
        }
        if (ch == 'W') {
            char_W++;
        }
        if (ch == 'X') {
            char_X++;
        }
        if (ch == 'Y') {
            char_Y++;
        }
        if (ch == 'Z') {
            char_Z++;
        }
    }
    //printing

    int array = {

     num - a, 
     num - b, 
     num - c, 
    };


    sort(item_array);
    print_array(item_array);
    //printf("a: %d\n", char_a + char_A);
    //printf("b: %d\n", char_b + char_B);
    //printf("c: %d\n", char_c + char_C);
    //printf("d: %d\n", char_d + char_D);
    //printf("e: %d\n", char_e + char_E);
    //printf("f: %d\n", char_f + char_F);
    //printf("g: %d\n", char_g + char_G);
    //printf("h: %d\n", char_h + char_H);
    //printf("i: %d\n", char_i + char_I);
    //printf("j: %d\n", char_j + char_J):
    //printf("k: %d\n", char_k + char_K);
    //printf("l: %d\n", char_l + char_L);
    //printf("m: %d\n", char_m + char_M);
    //printf("n: %d\n", char_n + char_N);
    //printf("o: %d\n", char_o + char_O);
    //printf("p: %d\n", char_p + char_P);
    //printf("q: %d\n", char_q + char_Q);
    //printf("r: %d\n", char_r + char_R);
    //printf("s: %d\n", char_s + char_S);
    //printf("t: %d\n", char_t + char_T);
    //printf("u: %d\n", char_u + char_U);
    //printf("v: %d\n", char_v + char_V);
    //printf("w: %d\n", char_w + char_W);
    //printf("x: %d\n", char_x + char_X);
    //printf("y: %d\n", char_y + char_Y);
    //printf("z: %d\n", char_z + char_Z);
    //fclose(ptr);
    return 0;
}




