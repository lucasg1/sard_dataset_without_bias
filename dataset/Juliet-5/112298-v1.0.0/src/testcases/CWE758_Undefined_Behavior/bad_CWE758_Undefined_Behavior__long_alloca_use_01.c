void FUN0()
{
    {
        long * pointer = (long *)ALLOCA(sizeof(long));
<START>
        long data = *pointer; 
<END>
        printLongLine(data);
    }
}
