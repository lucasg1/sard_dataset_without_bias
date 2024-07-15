namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = new long;
    {
        long * data = dataRef;
<START>
        free(data);
<END>
    }
}
} 
