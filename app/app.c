# include "pointers.h"

int main(void)
{

    int collection[] = {3,4,3,3,3};
    int count = 5;

    bubble_sort(collection, count);
    insertion_sort(collection, count);
    reverse(collection, count);
    calulate_frequency(collection, count, 4);


  return 0;
}
