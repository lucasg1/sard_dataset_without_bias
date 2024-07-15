static int staticFive = 5;
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    printLongLongLine(*data);
    free(data);
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    printLongLongLine(*data);
    free(data);
}
