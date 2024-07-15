void FUN0()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            long * pointer = (long *)ALLOCA(sizeof(long));
<START>
            long data = *pointer; 
<END>
            printLongLine(data);
        }
    }
}
