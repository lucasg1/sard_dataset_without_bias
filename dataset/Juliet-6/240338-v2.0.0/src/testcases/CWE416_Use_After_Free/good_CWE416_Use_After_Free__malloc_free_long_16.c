void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
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
    long * data;
    data = NULL;
    while(1)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        break;
    }
    while(1)
    {
        printLongLine(data[0]);
        break;
    }
}
