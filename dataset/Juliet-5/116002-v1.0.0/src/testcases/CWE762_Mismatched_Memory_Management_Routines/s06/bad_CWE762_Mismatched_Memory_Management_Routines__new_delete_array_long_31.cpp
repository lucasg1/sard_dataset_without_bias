namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long;
    {
        long * dataCopy = data;
        long * data = dataCopy;
<START>
        delete [] data;
<END>
    }
}
} 
