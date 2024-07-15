namespace NAMESPACE0
{
void FUN0()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(GLOBAL_CONST_TRUE)
    {
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
    }
}
} 
