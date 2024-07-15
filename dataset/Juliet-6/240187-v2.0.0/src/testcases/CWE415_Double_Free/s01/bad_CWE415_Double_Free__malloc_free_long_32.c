void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL;
    {
        long * data = *dataPtr1;
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
<START>
        free(data);
<END>
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        free(data);
    }
}
