namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long[100];
    {
        long * dataCopy = data;
        long * data = dataCopy;
<START>
        delete data;
<END>
    }
}
} 
