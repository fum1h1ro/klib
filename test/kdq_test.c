#include <stdio.h>
#include "kdq.h"

KDQ_INIT(int);

int main()
{
	kdq_t(int) *kl = kdq_init(int);

    for (int i = 0; i < 10; i++)
        kdq_push(int, kl, i);

    while (kdq_size(kl) > 0)
        printf("%d\n", *kdq_shift(int, kl));

	kdq_destroy(int, kl);
	return 0;
}

