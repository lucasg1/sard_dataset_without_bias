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
        int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
        data = 5LL;
        *pointer = data; 
        {
            int64_t data = *pointer;
            printLongLongLine(data);
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
        int64_t data;
        int64_t * pointer = (int64_t *)ALLOCA(sizeof(int64_t));
        data = 5LL;
        *pointer = data; 
        {
            int64_t data = *pointer;
            printLongLongLine(data);
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
