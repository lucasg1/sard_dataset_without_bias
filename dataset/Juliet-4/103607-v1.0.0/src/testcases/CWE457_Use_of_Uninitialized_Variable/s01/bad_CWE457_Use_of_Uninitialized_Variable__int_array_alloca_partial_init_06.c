static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<(10/2); i++)
            {
                data[i] = i;
            }
        }
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printIntLine(data[i]);
<END>
            }
        }
    }
}
