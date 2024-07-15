void FUN0()
{
    while(1)
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
        break;
    }
}
