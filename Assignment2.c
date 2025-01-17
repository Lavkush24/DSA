#include<Stdio.h>

// print butterfly pattern for n = 5   
void butterfly(int n) {
    for(int row=0 ; row<n; row++) {
        //print first stars
        for(int col=0; col<row+1; col++) {
            printf("*");
        }
        //print spaces
        for(int col=0; col<=(n-2*row) + 2; col++){
            printf(" ");
        }
        //again print stars
        for(int col=0; col<row+1; col++) {
            printf("*");
        }
        printf("\n");
    }
    //rotate pattern by 180 degree
    for(int row=n-1 ; row>=0; row--) {
        //print first stars
        for(int col=0; col<row+1; col++) {
            printf("*");
        }
        //print spaces
        for(int col=0; col<=(n-2*row) + 2; col++){
            printf(" ");
        }
        //again print stars
        for(int col=0; col<row+1; col++) {
            printf("*");
        }
        printf("\n");
    }
};




// Alphabet pattern for n=5
void alpha(int n) {
    for(int row=0; row<n; row++) {
        //print alphabets
        for(int col=0,c=65; col<=row; col++,c++) {
            printf("%c",c);
        }
        //print spaces 
        for(int col=0; col<2*(n-row-1); col++){
            printf(" ");
        }
        //print alphabets in reverse
        for(int col=0,c=65+row; col<=row; col++,c--) {
            printf("%c",c);
        }
        printf("\n");
    }
}



//  Hourglass Pattern for n=5 
void hourGlass(int n) {
    for(int row=0; row<n; row++) {
        //print space
        for(int col=0; col<row; col++) {
            printf(" ");
        }
        //print alphabets
        for(int col=0,c=65; col<2*(n-row)-1; col++,c++) {
            printf("%c",c);
        }
        printf("\n");
    }
    //bottom pattern
     for(int row=n-2; row>=0; row--) {
        //print space
        for(int col=0; col<row; col++) {
            printf(" ");
        }
        //print alphabets
        for(int col=0,c=65; col<2*(n-row)-1; col++,c++) {
            printf("%c",c);
        }
        printf("\n");
    }
}


//Hollow square pattern n = 5
void hollowSquare(int n) {
    for(int row=0; row<n; row++) {
        if(row == 0 || row == (n-1)) {
            for(int col=1; col<=n; col++) {
                printf("%d", col);
            }
        }else {
            for(int col=1; col<=n; col++) {
                if(col == 1 || col == n) {
                    printf("%d", col);
                }else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}


//Hollow hourglass pattern  for n=5
void hollowhourglass(int n) {
    for(int row=0; row<n; row++) {
        //first print space
        for(int col=0; col<row; col++) {
            printf(" ");
        }
        if(row==0) {
            for(int col=0,c=65; col<2*(n-row)-1; col++,c++) {
                printf("%c", c);
            }
        }else {
            for(int col=0,c=65; col<2*(n-row)-1; col++,c++) {
                if(col==0 || col==2*(n-row)-2) {
                    printf("%c", c);
                }else {
                    printf(" ");
                }
            }
        }    
        printf("\n");
    }
    //reverse pattern 
    for(int row=n-2; row>=0; row--) {
        //first print space
        for(int col=0; col<row; col++) {
            printf(" ");
        }
        if(row==0) {
            for(int col=0,c=65; col<2*(n-row)-1; col++,c++) {
                printf("%c", c);
            }
        }else {
            for(int col=0,c=65; col<2*(n-row)-1; col++,c++) {
                if(col==0 || col==2*(n-row)-2) {
                    printf("%c", c);
                }else {
                    printf(" ");
                }
            }
        }    
        printf("\n");
    }
}

//Pascal's triangle for  n = 5
void pascal(int n) {
    for(int row=0; row<n; row++) {

    }
}


//tree triangle pattern  n=3
void triangle(int n) {
    for(int row=0; row<n; row++) {
        
        for(int col=0; col<=row; col++) {
            printf("*");
        }
        for(int col=0; col<n-row-1; col++) {
            printf(" ");
        }
        printf("\n");
    }
}


int main() {
    int n = 3;
    triangle(n);
    return 0;
}



                                          