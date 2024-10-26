// warm-up: what will the compiler do?
void foo(void) {
    int i = 0;
    return;
}

// what will the compiler do?
int bar(void) {
    int x = 3;
    int y = 4;
    int z = 5;
    int w = 6;

    return x*y+z*w;
}

unsigned mul16(unsigned x) {
    return x * 16;
}
