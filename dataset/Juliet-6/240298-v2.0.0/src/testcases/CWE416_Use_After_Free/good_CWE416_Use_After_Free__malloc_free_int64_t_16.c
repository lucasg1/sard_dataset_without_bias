void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        break;
    }
    while(1)
    {
        printLongLongLine(data[0]);
        break;
    }
}
