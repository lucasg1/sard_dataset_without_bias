namespace NAMESPACE0
{
void FUN0()
{
    while(1)
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
        break;
    }
}
} 
