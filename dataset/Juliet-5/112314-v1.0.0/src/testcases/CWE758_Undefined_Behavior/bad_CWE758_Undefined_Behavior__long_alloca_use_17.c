void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
