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
    if(FUN0())
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
