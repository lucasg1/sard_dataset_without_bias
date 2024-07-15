void FUN0()
{
    goto sink;
sink:
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
