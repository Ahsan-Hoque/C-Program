// find ncr npr using long long data type for large number
#include<stdio.h>
#define ll long long

void find_ncr_npr(int, int, ll*, ll*);
ll find_npr(int, int);
ll factorial(int);

int main() {
   int n, r;
   ll ncr, npr;

   printf("Input n and r\n");
   scanf("%d%d", &n, &r);

   find_ncr_npr(n, r, &npr, &ncr);

   printf("%dC%d = %lld\n", n, r, ncr);
   printf("%dP%d = %lld\n", n, r, npr);

   return 0;
}

void find_ncr_npr(int n, int r, ll *npr, ll *ncr) {
   *npr = find_npr(n, r);
   *ncr = *npr/factorial(r);
}

ll find_npr(int n, int r) {
   ll result = 1;
   int c = 1;

   while (c <= r) {
      result = result * (n - r + c);
      c++;
   }

   return result;
}

ll factorial(int n) {
   int c;
   ll result = 1;

   for (c = 1; c <= n; c++)
      result = result*c;

   return result;
}
