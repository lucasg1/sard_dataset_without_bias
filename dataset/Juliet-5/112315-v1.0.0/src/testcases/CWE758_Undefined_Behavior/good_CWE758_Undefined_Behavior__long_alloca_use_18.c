void FUN0()
{
    goto sink;
sink:
    {
        long data;
        long * pointer = (long *)ALLOCA(sizeof(long));
        data = 5L;
        *pointer = data; 
        {
            long data = *pointer;
            printLongLine(data);
        }
    }
}
