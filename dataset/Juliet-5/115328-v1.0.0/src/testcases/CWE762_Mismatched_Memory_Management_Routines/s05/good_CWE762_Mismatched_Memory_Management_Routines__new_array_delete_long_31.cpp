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
        delete data;
    }
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long[100];
    {
        long * dataCopy = data;
        long * data = dataCopy;
        delete [] data;
    }
}
} 
