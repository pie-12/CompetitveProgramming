//xau nhi phan co do dai N
void try(int i){
    for (int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == n)
            inkq();
        else
            try (i + 1);
    }
}

//to hop chap k cua N
x[0] = 0;
void try (int i){
    for (int j = x[i-1]; j <= n - k + 1; j++){
        x[i] = j;
        if (i == k)
            inkq();
        else
            try (i + 1);
    }
}

//n hoan vi
void try (int i){
    for (int j = 1; j <= n; j++){
        if(used[j]==0){
                a[i] = j;
                used[j] = 1;
        if(i == n) inkq();
        else try(i + 1);
            used[j] = 0;
        }
    }
}
