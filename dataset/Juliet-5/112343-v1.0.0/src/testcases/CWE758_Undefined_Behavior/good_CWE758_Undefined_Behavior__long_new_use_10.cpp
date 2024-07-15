namespace NAMESPACE0
{
void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            long data;
            data = 5L;
            long * pointer = new long;
            *pointer = data; 
            {
                long data = *pointer;
                printLongLine(data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        {
            long data;
            data = 5L;
            long * pointer = new long;
            *pointer = data; 
            {
                long data = *pointer;
                printLongLine(data);
            }
            delete pointer;
        }
    }
}
} 
