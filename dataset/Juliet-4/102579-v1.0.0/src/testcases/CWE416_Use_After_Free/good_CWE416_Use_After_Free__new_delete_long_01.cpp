namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    printLongLine(*data);
}
void FUN1()
{
    long * data;
    data = NULL;
    data = new long;
    *data = 5L;
    delete data;
    ; 
}
} 
