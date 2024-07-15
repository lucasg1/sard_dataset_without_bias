void FUN0()
{
    while(1)
    {
        {
            long * pointer = (long *)ALLOCA(sizeof(long));
<START>
            long data = *pointer; 
<END>
            printLongLine(data);
        }
        break;
    }
}
