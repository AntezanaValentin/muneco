#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "colores.h"

int main(int argc, char *argv[]) {

// char *person = " \\   / \n"
//                "  \\0/ \n"
//                "   | \n"
//                "   | \n"
//                "  / \\ \n"
//                " /   \\";
//
// char *person1 = "\\    \n"
// " \\ 0 \n"
// "   |\\ \n"
// "   | \\ \n"
// "  / \\ \n"
// " /   \\";
//
// char *person2 = "\\    \n"
// " \\ 0 \n"
// "   |\\ \n"
// "   |/ \n"
// "  / \\ \n"
// " /   \\";
//
// char *person3 = "     \n"
// "   0 \n"
// "  /|\\ \n"
// " / |/ \n"
// "  / \\ \n"
// " /   \\";
//
// char *person4 = "     \n"
// "   0 \n"
// "  /|\\ \n"
// "  \\|/ \n"
// "  / \\ \n"
// " /   \\";
//
// char *person5 = "     \n"
// "   0 \n"
// " \\/|\\/ \n"
// "   |   \n"
// "  / \\  \n"
// " /   \\";
//
// char *person6 = "     /\n"
// "   0/ \n"
// "  /| \n"
// " / |  \n"
// "  / \\ \n"
// " /   \\";
//
// char *person7 = "     /\n"
// "   0/ \n"
// "  /|  \n"
// "  \\|  \n"
// "  / \\ \n"
// " /   \\";
//
// char *person8 = "     \n"
// "   0 \n"
// "  /|\\ \n"
// "  \\| \\ \n"
// "  / \\ \n"
// " /   \\";
//
// char *person9 = "     \n"
// "   0 \n"
// "  /|\\ \n"
// "  \\|/ \n"
// "  / \\ \n"
// " /   \\";
//
// char *person10 = "     \n"
//                  "   0 \n"
//                  " \\/|\\/ \n"
//                  "   |   \n"
//                  "  / \\  \n"
//                  " /   \\";

char *person = " 0               0 \n"
               " \\\\     ___     // \n"
               "  \\\\   (0 0)   // \n"
               "   \\\\  \\_v_/  // \n"
               "    \\\\__| |__// \n"
               "     \\       / \n"
               "     |       | \n"
               "     |       | \n"
               "     |_______| \n"
               "     /  / \\  \\     \n"
               "    /  /   \\  \\     \n"
               "   /  /     \\  \\     \n"
               " _/  /       \\  \\_     \n"
               "(____)       (____)    ";











char *person = " 0               0 \n"
               " \\\\     ___     // \n"
               "  \\\\   (0 0)   // \n"
               "   \\\\  \\_v_/  // \n"
               "    \\\\__| |__// \n"
               "     \\       / \n"
               "      |       | \n"
               "      |       | \n"
               "      |_______| \n"
               "     /  / \\  \\     \n"
               "    /  /   \\  \\     \n"
               "   /  /     \\  \\     \n"
               " _/  /       \\  \\_     \n"
               "(____)       (____)    ";

  while(1) {
    system("clear");
    printf("\x1B[34m%s\n", person);
    usleep(200000000);
    system("clear");
    printf("\x1B[35m%s\n", person1);
    usleep(200000);
    system("clear");
    printf("\x1B[32m%s\n", person2);
    usleep(200000);
    system("clear");
    printf("\x1B[33m%s\n", person3);
    usleep(200000);
    system("clear");
    printf("\x1B[31m%s\n", person4);
    usleep(200000);
    system("clear");
    printf("\x1B[36m%s\n", person5);
    usleep(200000);
    system("clear");
    printf("\x1B[34m%s\n", person);
    usleep(200000);
    system("clear");
    printf("\x1B[35m%s\n", person5);
    usleep(200000);
    system("clear");
    printf("\x1B[32m%s\n", person6);
    usleep(200000);
    system("clear");
    printf("\x1B[33m%s\n", person7);
    usleep(200000);
    system("clear");
    printf("\x1B[31m%s\n", person8);
    usleep(200000);
    system("clear");
    printf("\x1B[36m%s\n", person9);
    usleep(200000);
    system("clear");
    printf("\x1B[36m%s\n", person10);
    usleep(200000);
  }
  return 0;
}
