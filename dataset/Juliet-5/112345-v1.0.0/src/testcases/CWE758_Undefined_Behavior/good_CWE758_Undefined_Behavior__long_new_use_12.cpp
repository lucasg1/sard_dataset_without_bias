namespace NAMESPACE0
{
void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
} 
