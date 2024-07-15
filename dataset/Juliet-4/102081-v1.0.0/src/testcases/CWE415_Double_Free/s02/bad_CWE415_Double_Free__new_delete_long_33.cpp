namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = new long;
    delete data;
    {
        long * data = dataRef;
<START>
        delete data;
<END>
    }
}
} 
