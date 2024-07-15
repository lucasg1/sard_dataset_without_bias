void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            int * data = (int *)malloc(100*sizeof(int));
            if (data == NULL) {exit(-1);}
            data[0] = 5;
            printIntLine(data[0]);
<START>
            data = (int *)realloc(data, (130000)*sizeof(int));
<END>
            if (data != NULL)
            {
                data[0] = 10;
                printIntLine(data[0]);
                free(data);
            }
        }
    }
}
