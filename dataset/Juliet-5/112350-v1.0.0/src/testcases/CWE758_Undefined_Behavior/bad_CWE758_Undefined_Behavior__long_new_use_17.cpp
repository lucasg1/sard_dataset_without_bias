namespace NAMESPACE0
{
void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            long * pointer = new long;
<START>
            long data = *pointer; 
<END>
            delete pointer;
            printLongLine(data);
        }
    }
}
} 
