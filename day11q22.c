#include <stdio.h>
int main() {
double costprice, sellingprice, percentage;
scanf("%lf %lf", &costprice, &sellingprice);
if (sellingprice>costprice) {
percentage=((sellingprice-costprice)/costprice)*100;
printf("Profit %g%%", percentage);
} else if (sellingprice<costprice) {
percentage=((costprice-sellingprice)/costprice)*100;
printf("Loss %g%%", percentage);
} else {
printf("No Profit No Loss");
}
return 0;
}
