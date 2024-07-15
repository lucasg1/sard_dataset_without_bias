namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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
