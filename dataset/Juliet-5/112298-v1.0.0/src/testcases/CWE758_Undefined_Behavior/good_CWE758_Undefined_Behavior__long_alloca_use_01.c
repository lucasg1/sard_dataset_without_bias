void FUN0()
{
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
