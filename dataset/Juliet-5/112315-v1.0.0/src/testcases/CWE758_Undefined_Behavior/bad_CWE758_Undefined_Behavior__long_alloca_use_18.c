void FUN0()
{
    goto sink;
sink:
    {
        long * pointer = (long *)ALLOCA(sizeof(long));
<START>
        long data = *pointer; 
<END>
        printLongLine(data);
    }
}
