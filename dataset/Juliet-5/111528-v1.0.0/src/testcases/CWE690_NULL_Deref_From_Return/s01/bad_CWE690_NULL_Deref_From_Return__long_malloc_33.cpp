namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL; 
    data = (long *)malloc(1*sizeof(long));
    {
        long * data = dataRef;
<START>
        data[0] = 5L;
<END>
        printLongLine(data[0]);
        free(data);
    }
}
} 
