void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
}
