#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//count set bits in an integer
int count_set_bit(int n) {
    int count=0, counter;
    counter = n;
    int mask = 1;
    while(counter != 0) {
        if((n&mask) != 0) {
            count++;
        }
        counter = counter>>1;
        mask = mask<<1;
    }
    return count;
}

//program to find wheather number is power of two 
void power_of_two(int n) {
    if((n&(n-1)) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }
};

//find position of set bit 
void position_of_set_bit(int n) {
    int counter = n,count=0;
    int mask = 1;

    printf("Positions of set bits: ");
    while(counter != 0) {
        if((n&mask) != 0) {
            printf("%d ", count);
        }
        counter = counter>>1;
        mask = mask << 1; 
        count++;
    }
}

//Count total set bits from number 1 to n
void set_bit_one_to_n(int n) {
    int count = 0;

    for(int i=1; i<=n; i++) {
        int c = count_set_bit(i);
        count += c;
    }
    printf("%d set bits\n", count);
}


//find to non repeating elements in a array of repeating elements
//count number of bit flipped to convert A to B
//calculate square of a number without using /,* and pow()
int square(int n) {

}

//divide a two integers without using * ,/ , and % mod operator

//powers set
void powerSet(int n, int arr[]) {
    printf("Power set: \n");
    for(int i=0; i<pow(2,n); i++) {
        int data = i, count = 0, mask = 1;
        printf("{");
        while(data != 0) {
            if((i&mask) != 0) {
                printf("%d,",arr[count]);
            }
            data = data>>1;
            mask = mask<<1;
            count++;
        }
        printf("}\n");
    }
}




int main() {
    int arr[] = {3,4,5,10};
    printf("%d\n",count_set_bit(11));
    position_of_set_bit(11);
    printf("\n");
    power_of_two(16);
    printf("\n");
    set_bit_one_to_n(10);
    // printf("\n%d\n", divide(10,3));
    powerSet(4,arr);
    // printf("%d", set_bit_one_to_n(0));

    return 0;
}