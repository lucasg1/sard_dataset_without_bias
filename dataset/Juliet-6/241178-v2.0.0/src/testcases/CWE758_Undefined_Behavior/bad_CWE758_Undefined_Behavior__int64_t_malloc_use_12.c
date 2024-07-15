void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            int64_t * pointer = (int64_t *)malloc(sizeof(int64_t));
            if (pointer == NULL) {exit(-1);}
<START>
            int64_t data = *pointer; 
<END>
            free(pointer);
            printLongLongLine(data);
        }
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
