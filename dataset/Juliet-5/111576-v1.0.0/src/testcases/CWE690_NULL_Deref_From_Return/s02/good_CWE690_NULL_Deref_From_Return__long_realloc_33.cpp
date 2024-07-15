namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL; 
    data = (long *)realloc(data, 1*sizeof(long));
    {
        long * data = dataRef;
        if (data != NULL)
        {
            data[0] = 5L;
            printLongLine(data[0]);
            free(data);
        }
    }
}
} 
