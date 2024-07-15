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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
