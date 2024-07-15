namespace NAMESPACE0
{
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
        data = 5L;
        long * pointer = new long;
        *pointer = data; 
        {
            long data = *pointer;
            printLongLine(data);
        }
        delete pointer;
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
        data = 5L;
        long * pointer = new long;
        *pointer = data; 
        {
            long data = *pointer;
            printLongLine(data);
        }
        delete pointer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
