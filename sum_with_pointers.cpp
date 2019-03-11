#include <stdio.h>
#include <math.h>

using namespace std;

void update(int *a, int *b)
{
    int originalA = (*a);
    *a = originalA + (*b);
    *b = abs(originalA - (*b));
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
