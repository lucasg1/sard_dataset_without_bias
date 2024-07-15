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
            int64_t * pointer = (int64_t *)malloc(sizeof(int64_t));
            if (pointer == NULL) {exit(-1);}
            data = 5LL;
            *pointer = data; 
            {
                int64_t data = *pointer;
                printLongLongLine(data);
            }
            free(pointer);
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            int64_t data;
            int64_t * pointer = (int64_t *)malloc(sizeof(int64_t));
            if (pointer == NULL) {exit(-1);}
            data = 5LL;
            *pointer = data; 
            {
                int64_t data = *pointer;
                printLongLongLine(data);
            }
            free(pointer);
        }
    }
}
