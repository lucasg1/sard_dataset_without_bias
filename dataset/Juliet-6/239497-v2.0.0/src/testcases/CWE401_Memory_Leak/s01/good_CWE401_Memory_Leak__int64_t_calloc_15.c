void FUN0()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        free(data);
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        data[0] = 5LL;
        printLongLongLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (int64_t *)ALLOCA(100*sizeof(int64_t));
        data[0] = 5LL;
        printLongLongLine(data[0]);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
