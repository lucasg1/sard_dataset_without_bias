namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrue())
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
