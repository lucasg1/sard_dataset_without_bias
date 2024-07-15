namespace NAMESPACE0
{
void FUN0()
{
    int64_t data;
    int64_t &dataRef = data;
    data = 0LL;
    data = LLONG_MIN;
    {
        int64_t data = dataRef;
        {
<START>
            int64_t result = data - 1;
<END>
            printLongLongLine(result);
        }
    }
}
} 
