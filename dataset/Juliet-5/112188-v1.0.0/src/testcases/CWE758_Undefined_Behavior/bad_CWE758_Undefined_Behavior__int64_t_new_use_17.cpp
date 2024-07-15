namespace NAMESPACE0
{
void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int64_t * pointer = new int64_t;
<START>
            int64_t data = *pointer; 
<END>
            delete pointer;
            printLongLongLine(data);
        }
    }
}
} 
