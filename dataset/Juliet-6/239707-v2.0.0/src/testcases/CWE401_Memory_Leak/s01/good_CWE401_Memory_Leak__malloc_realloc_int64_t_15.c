void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        int64_t * tmpData;
        data[0] = 5LL;
        printLongLongLine(data[0]);
        tmpData = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0] = 10LL;
            printLongLongLine(data[0]);
        }
        free(data);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        int64_t * tmpData;
        data[0] = 5LL;
        printLongLongLine(data[0]);
        tmpData = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
        if (tmpData != NULL)
        {
            data = tmpData;
            data[0] = 10LL;
            printLongLongLine(data[0]);
        }
        free(data);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
