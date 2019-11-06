void mx_printchar(char c);

void mx_print_alphabet(void) {
    for(char c = 0; c < 26; c++) {
        if (c % 2 == 0) {
            mx_printchar(c + 'A');
        }
        else {
            mx_printchar(c + 'a');
        }
    }
    mx_printchar('\n');
}
    
