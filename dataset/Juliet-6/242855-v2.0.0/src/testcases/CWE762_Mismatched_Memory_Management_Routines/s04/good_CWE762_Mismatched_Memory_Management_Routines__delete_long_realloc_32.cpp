namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL;
    {
        long * data = *dataPtr1;
        data = new long;
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        delete data;
    }
}
void FUN1()
{
    long * data;
    long * *dataPtr1 = &data;
    long * *dataPtr2 = &data;
    data = NULL;
    {
        long * data = *dataPtr1;
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
        *dataPtr1 = data;
    }
    {
        long * data = *dataPtr2;
        free(data);
    }
}
} 
