namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    int64_t &dataRef = data;
    ; 
    {
        int64_t data = dataRef;
        data = 5LL;
        printLongLongLine(data);
    }
}
} 
