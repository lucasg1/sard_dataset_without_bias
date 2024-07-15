void FUN0(int sig)
{
    void *voidPointer = malloc(10);
    if (voidPointer == NULL) {exit(-1);}
    free(voidPointer);
}
static volatile sig_atomic_t volatileSigAtomic = 0;
void FUN1(int sig)
{
    volatileSigAtomic = sig;
}
static const int STATIC_CONST_FIVE = 5;
void FUN2()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        signal(SIGINT, FUN1);
    }
}
void FUN3()
{
    if(STATIC_CONST_FIVE==5)
    {
        signal(SIGINT, FUN1);
    }
}
