void FUN0()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)ALLOCA(100*sizeof(int64_t));
    data[0] = 5LL;
    printLongLongLine(data[0]);
    ; 
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    data[0] = 5LL;
    printLongLongLine(data[0]);
    free(data);
}
