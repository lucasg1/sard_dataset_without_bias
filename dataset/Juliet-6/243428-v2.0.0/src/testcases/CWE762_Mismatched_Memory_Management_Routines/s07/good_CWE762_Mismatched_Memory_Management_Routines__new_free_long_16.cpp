namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = new long;
        break;
    }
    while(1)
    {
        delete data;
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
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
} 
