namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (long *)realloc(data, 100*sizeof(long));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
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
} 
