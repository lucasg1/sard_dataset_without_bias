namespace NAMESPACE0
{
void FUN0(long * &data)
{
    data = (long *)malloc(1*sizeof(long));
}
void FUN1()
{
    long * data;
    data = NULL; 
    FUN0(data);
    if (data != NULL)
    {
        data[0] = 5L;
        printLongLine(data[0]);
        free(data);
    }
}
} 
