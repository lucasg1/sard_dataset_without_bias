static int64_t * VAR0;
static int64_t * VAR1;
static int64_t * VAR2;
void FUN0()
{
    int64_t * data = VAR1;
    free(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    VAR1 = data;
    FUN0();
}
void FUN2()
{
    int64_t * data = VAR2;
    ; 
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    free(data);
    VAR2 = data;
    FUN2();
}
