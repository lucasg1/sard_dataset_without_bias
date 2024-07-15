static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        printIntLine(data[0]);
<END>
    }
}
