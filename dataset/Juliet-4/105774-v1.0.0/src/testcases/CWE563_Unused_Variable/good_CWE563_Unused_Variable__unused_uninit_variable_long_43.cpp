namespace NAMESPACE0
{
void FUN0(long &data)
{
    ; 
}
void FUN1()
{
    long data;
    FUN0(data);
    data = 5L;
    printLongLine(data);
}
} 
