void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
void FUN1()
{
    switch(6)
    {
    case 6:
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
    default:
        printLine("Benign, fixed string");
        break;
    }
}
