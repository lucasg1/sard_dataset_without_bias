namespace NAMESPACE0
{
void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
