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
void FUN2()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        signal(SIGINT, FUN1);
        break;
    }
}
void FUN3()
{
    switch(6)
    {
    case 6:
        signal(SIGINT, FUN1);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
