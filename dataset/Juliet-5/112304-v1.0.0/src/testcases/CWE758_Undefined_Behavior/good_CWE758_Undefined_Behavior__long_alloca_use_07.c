static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
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
}
void FUN1()
{
    if(staticFive==5)
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
}
