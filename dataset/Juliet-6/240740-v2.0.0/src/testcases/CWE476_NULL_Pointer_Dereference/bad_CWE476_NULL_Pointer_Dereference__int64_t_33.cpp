namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    int64_t * &dataRef = data;
    data = NULL;
    {
        int64_t * data = dataRef;
<START>
        printLongLongLine(*data);
<END>
    }
}
} 
