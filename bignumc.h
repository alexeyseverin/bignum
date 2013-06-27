typedef struct _bignum {
    int sign;
    char *d;
    int size;
} bignum; 
bignum bigread(const char *);
void bigwrite(bignum, const char *);
void freemem(bignum);
bignum allocmem(int);
int bigcompare(bignum, bignum);
bignum bigsubz(bignum, bignum);
bignum bigsubbz(bignum, bignum);
bignum bigaddz(bignum, bignum);
bignum bigmul(bignum, bignum);
bignum bigdiv(bignum, bignum);
bignum bigmod(bignum, bignum);
bignum bigaddbz(bignum, bignum);
void bigout(bignum);
bignum bigcopy(bignum);
bignum bigneg(bignum);
