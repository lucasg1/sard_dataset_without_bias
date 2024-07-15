static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN3()
{
    if(FUN0())
    {
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
    }
}
