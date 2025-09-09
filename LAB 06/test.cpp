#include <stdio.h>

int main() {
    int num , i , j , จำนวนเฉพาะ ;

    printf( "กรุณาใส่ตัวเลข: " ) ;
    scanf( "%d" , &num ) ;

    for( i = num ; i >= 2 ; i-- ) {
        จำนวนเฉพาะ = 1 ; 
        for( j = 2 ; j < i ; j++ ) {
            if( i % j == 0 ) {
                จำนวนเฉพาะ = 0 ;
            }//end if
        }//end for
        if( จำนวนเฉพาะ ) {
            printf( "%d ", i ) ; 
        }
    }//end for

    return 0 ;
}//end function 