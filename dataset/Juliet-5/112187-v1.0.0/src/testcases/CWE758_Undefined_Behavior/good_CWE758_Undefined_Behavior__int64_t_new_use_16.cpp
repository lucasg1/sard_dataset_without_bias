namespace NAMESPACE0
{
void FUN0()
{
    while(1)
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
        break;
    }
}
} 
