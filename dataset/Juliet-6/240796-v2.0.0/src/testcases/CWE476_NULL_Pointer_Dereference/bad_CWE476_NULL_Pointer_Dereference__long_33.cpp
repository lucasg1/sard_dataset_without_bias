namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    {
        long * data = dataRef;
<START>
        printLongLine(*data);
<END>
    }
}
} 
