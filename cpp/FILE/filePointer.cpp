#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    FILE *fp;
    char *fName = "testFile.txt";

    fp = fopen(fName, "a+");

    fprintf(fp, "This is a test file.\t");
    fprintf(fp, "First line of text!\n");
    fprintf(fp, "Second line.");

    int byteSize;
    byteSize = fclose(fp);
    cout<<byteSize<<endl;

    return 0;
}

