void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    if (argc < 2) 
        return 1;
    
    for (int i = 1; i < argc; i++) {
        for(int j = i + 1; j < argc; j++) {
            if(mx_strcmp(argv[i], argv[j]) > 0){
                char *tmp =argv[i];
                argv[i] = argv[j];
                argv[j] = tmp;
            }
        }
    }
    int k = 1;
    while(k < argc) {
        mx_printstr(argv[k]);
        mx_printchar('\n');
        k++;
    }
}


