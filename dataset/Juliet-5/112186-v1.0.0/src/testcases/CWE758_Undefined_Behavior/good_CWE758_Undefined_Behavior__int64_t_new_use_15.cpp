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
        int64_t data;
        data = 5LL;
        int64_t * pointer = new int64_t;
        *pointer = data; 
        {
            int64_t data = *pointer;
            printLongLongLine(data);
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
        int64_t data;
        data = 5LL;
        int64_t * pointer = new int64_t;
        *pointer = data; 
        {
            int64_t data = *pointer;
            printLongLongLine(data);
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
