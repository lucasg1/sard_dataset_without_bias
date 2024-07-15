static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
<START>
        printIntLine(data[0]);
<END>
    }
}
