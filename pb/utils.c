void printBits( void const * const ptr, size_t const size )
{   printf( "hexVal = %#08x; decVal = %i \n", * ( unsigned int* )ptr, * ( unsigned int* )ptr );
    unsigned char *b = ( unsigned char* ) ptr;
    unsigned char byte;
    int i, j;
    for (i=size-1;i>=0;i--)
       for (j=7;j>=0;j--)
        {   byte = (b[i] >> j) & 1;
            printf( " %u ", byte );
        }
    puts("");
    for( int ind  = 31; ind > 9; ind-- )
        printf( "%d ", ind );
    for( int ind  = 9; ind > -1; ind-- )
        printf( " %d ", ind );      
    puts(""); puts("");
};
