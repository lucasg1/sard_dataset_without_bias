static int64_t * VAR0;
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR1;
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int64_t * data = VAR2;
    free(data);
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR2 = data;
    FUN2();
}
