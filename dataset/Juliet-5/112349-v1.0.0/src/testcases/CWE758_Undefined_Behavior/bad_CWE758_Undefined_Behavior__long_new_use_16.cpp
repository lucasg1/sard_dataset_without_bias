namespace NAMESPACE0
{
void FUN0()
{
    while(1)
    {
        {
            long * pointer = new long;
<START>
            long data = *pointer; 
<END>
            delete pointer;
            printLongLine(data);
        }
        break;
    }
}
} 
