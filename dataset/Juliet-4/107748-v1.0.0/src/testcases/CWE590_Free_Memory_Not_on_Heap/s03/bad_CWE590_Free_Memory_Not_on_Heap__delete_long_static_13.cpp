namespace NAMESPACE0
{
void FUN0()
{
    long * data;
    data = NULL; 
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            static long dataBuffer;
            dataBuffer = 5L;
            data = &dataBuffer;
        }
    }
    printLongLine(*data);
<START>
    delete data;
<END>
}
} 
