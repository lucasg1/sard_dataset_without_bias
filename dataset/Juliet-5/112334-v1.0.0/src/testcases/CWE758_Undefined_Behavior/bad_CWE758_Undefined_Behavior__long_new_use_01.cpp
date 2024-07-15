namespace NAMESPACE0
{
void FUN0()
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
