namespace NAMESPACE0
{
void FUN0()
{
    goto sink;
sink:
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
