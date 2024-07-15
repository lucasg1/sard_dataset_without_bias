namespace NAMESPACE0
{
void FUN0()
{
    long data;
    long &dataRef = data;
    ; 
    {
        long data = dataRef;
        data = 5L;
        printLongLine(data);
    }
}
} 
