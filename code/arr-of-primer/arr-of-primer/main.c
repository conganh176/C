//
//  main.c
//  arr-of-primer
//
//  Created by Cong Anh Nguyen on 12/13/19.
//  Copyright © 2019 Cong Anh Nguyen. All rights reserved.
//

#include <stdio.h>
#include<math.h>

int kiemtra_nguyento(int n) {
    if (n == 0 || n == 1) return 0;
    for(int i = 2; i < n; i++){
        if (n%i == 0) return 0
    }
    return 1;
}

void Sort(int* &arr, int n){
    int i,j,temp;
    for(i=0; i)
    s
}


int main(int argc, const char * argv[]) {
    int N;
    printf("Nhap vao so N:");
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        printf("nhap vao phan tu thu %d cua mang :", i);
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for (int i = 0; i < N; i++){
        if (kiemtra_nguyento(arr[i]) == 1) count++;
    }
    printf("so luong so nguyen to co trong day la: %d\n", count);
    
    return 0;
}
