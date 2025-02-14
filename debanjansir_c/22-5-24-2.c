#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    int i,s,ss;
    if (argc < 2) {
        printf("Insufficient arguments\n");
    }
else {
    s=atoi(argv[1]);
    ss=atoi(argv[1]);
    for (i = 2; i < argc; i++) {
        if (atoi(argv[i]) < s) {
            ss = s;
            s = atoi(argv[i]);
        } else if (atoi(argv[i]) < ss && atoi(argv[i]) > s) {
            ss = atoi(argv[i]);
        }
    }
        printf("Second smallest: %d\n", ss);
    }
    return 0;
}
