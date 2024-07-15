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
        delete data;
    }
}
void FUN1()
{
    long * data;
    long * &dataRef = data;
    data = NULL;
    data = new long;
    delete data;
    {
        long * data = dataRef;
        ; 
    }
}
} 
