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
    data = new long;
    delete data;
    {
        long * dataCopy = data;
        long * data = dataCopy;
        ; 
    }
}
} 
