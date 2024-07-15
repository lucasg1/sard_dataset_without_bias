int64_t * VAR0;
int64_t * VAR1;
int64_t * VAR2;
void FUN0();
void FUN1();
void FUN2()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR1 = data;
    FUN0();
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    VAR2 = data;
    FUN1();
}
extern int64_t * VAR0;
extern int64_t * VAR1;
extern int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR1;
    ; 
}
void FUN1()
{
    int64_t * data = VAR2;
    free(data);
}
