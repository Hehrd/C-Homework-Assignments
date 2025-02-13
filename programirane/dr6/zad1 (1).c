#include <stdio.h>
#include <limits.h>

int main(){

    printf("\n%-15s %-15s   %-15s %-25s %-25s %-15s     %-25s\n", "Name", "Format Specifier", "Bytes", "MAX(signed)", "MIN(signed)", "Unsigned Format Specifier", "MAX(unsigned)");
    printf("\n%-15s %-15s   %-15d %-25d %-25d %-15s     %-25d\n", "char", "%c", sizeof(char), CHAR_MAX, CHAR_MIN, "%u", UCHAR_MAX);
    printf("\n%-15s %-15s   %-15d %-25d %-25d %-15s     %-25d\n", "short", "%hd", sizeof(short), SHRT_MAX, SHRT_MIN, "%hd", USHRT_MAX);
    printf("\n%-15s %-15s   %-15d %-25d %-25d %-15s     %-25u\n", "int", "%d", sizeof(int), INT_MAX, INT_MIN, "%u", UINT_MAX);
    printf("\n%-15s %-15s   %-15d %-25ld %-25ld %-15s   %-25lu\n", "long", "%ld", sizeof(long), LONG_MAX, LONG_MIN, "%lu", ULONG_MAX);
    printf("\n%-15s %-15s   %-15d %-25lld %-25lld %-15s     %-25llu\n", "long long", "%lld", sizeof(long long), LONG_LONG_MAX, LONG_LONG_MIN, "%llu", ULONG_LONG_MAX);

    return 0;
}