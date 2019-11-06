int mx_factorial_iter(int n) {
    int team = n;
    int i = 1;

    if(n == 0 )
        return 1;
    if(n < 0 || n >= 13)
        return 0;
    while(i < n) {
        team = team * i;
        i++;
    }
    return team;
}

