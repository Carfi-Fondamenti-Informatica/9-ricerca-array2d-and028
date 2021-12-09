int posizione (const char a[10][20], const char b[20]){
    int p=0;
    for (int j=0; j<20; j++){
        if( (a[0][j]==b[j]) ){
            if (j==19){
                p=1;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[1][j]==b[j]) ){
            if (j==19) {
                p=2;
            }

        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[2][j]==b[j]) ){
            if (j==19) {
                p=3;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[3][j]==b[j])  ){
            if (j==19) {
                p=4;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[4][j]==b[j])  ){
            if (j==19) {
                p=5;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[5][j]==b[j])  ){
            if (j==19) {
                p=6;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[6][j]==b[j])  ){
            if (j==19) {
                p=7;
            }
        } else {
            break;
        }
    }


    for (int j=0; j<20; j++){
        if( (a[7][j]==b[j])  ){
            if (j==19) {
                p=8;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[8][j]==b[j])  ){
            if (j==19) {
                p=9;
            }
        } else {
            break;
        }
    }

    for (int j=0; j<20; j++){
        if( (a[9][j]==b[j])  ){
            if (j==19) {
                p=10;
            }
        } else {
            break;
        }
    }



    return p;

}
