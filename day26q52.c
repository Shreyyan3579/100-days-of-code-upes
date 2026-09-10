#include <stdio.h>
int main() {
int i, j;
for (i = 0; i < 5; i++) {
int stars;
if (i <= 2) {
stars = 2*i+1;
} else {
stars = 2*(4-i)+1;
}
for (j=0; j<stars; j++) {
printf("*\n");
}
if (i<4) {
printf("\n");
}
}
return 0;
}
