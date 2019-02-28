#include <assert.h>
#include <stdlib.h>
#include "strlen.h"

static void test_strlen() {
    assert( 6 == strlen("123456") );
}

int main() {
    test_strlen();
}
