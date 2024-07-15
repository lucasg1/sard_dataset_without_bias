static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
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
