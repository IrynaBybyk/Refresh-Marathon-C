void mx_printchar(char c);
void mx_printstr(char *);

int main(int argc, char *argv[]) {
    if(argc < 2) {
        return 0;
    }
for(int i = 1; i < argc; i++) {
    mx_printstr(argv[i]);
    mx_printchar('\n');
    }
    return 0;
}

    
