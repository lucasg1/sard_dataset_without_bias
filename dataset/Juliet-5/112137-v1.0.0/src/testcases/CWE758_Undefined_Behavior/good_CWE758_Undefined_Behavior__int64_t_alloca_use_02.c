void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(1)
    {
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
    }
}
