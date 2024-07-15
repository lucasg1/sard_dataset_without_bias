static int64_t * VAR0;
static int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR1;
    printLongLongLine(*data);
    free(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(sizeof(*data));
    if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
    VAR1 = data;
    FUN0();
}
