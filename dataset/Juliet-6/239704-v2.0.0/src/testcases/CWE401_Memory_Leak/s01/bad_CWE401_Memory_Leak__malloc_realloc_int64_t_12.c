void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            int64_t * data = (int64_t *)malloc(100*sizeof(int64_t));
            if (data == NULL) {exit(-1);}
            data[0] = 5LL;
            printLongLongLine(data[0]);
<START>
            data = (int64_t *)realloc(data, (130000)*sizeof(int64_t));
<END>
            if (data != NULL)
            {
                data[0] = 10LL;
                printLongLongLine(data[0]);
                free(data);
            }
        }
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
