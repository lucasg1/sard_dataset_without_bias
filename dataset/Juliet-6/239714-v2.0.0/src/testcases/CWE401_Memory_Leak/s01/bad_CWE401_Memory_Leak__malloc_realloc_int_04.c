static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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
