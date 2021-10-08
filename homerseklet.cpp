int hideg(int napok[], int meret) {
    int hideg = 0;
    for (int i = 0;i < meret; i++){
        if (napok[i]<0){
            hideg++;
        }
    }
    return hideg;
}

/*
int hideg(int napok[], int meret) {
    int db = 0;
    for (int i = 0; i < meret; i++) {
        if (napok[i] < 0) {
            db++;
        }
    }

    return db;
}
 */
