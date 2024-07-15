static int staticFive = 5;
void FUN0()
{
    int * data;
    data = (int *)ALLOCA(10*sizeof(int));
    if(staticFive==5)
    {
        ; 
    }
    if(staticFive==5)
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
