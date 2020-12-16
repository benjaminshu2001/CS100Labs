int main() {
    int *p = new int[10];
    p[9] = 1;
 
    delete[] p; //deallocates memory

    return 0;
}
