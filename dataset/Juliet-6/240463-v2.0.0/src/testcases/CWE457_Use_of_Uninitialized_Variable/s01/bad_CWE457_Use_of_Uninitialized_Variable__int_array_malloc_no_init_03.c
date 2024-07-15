void FUN0()
{
    int * data;
    data = (int *)malloc(10*sizeof(int));
    if (data == NULL) {exit(-1);}
    if(5==5)
    {
        ; 
    }
    if(5==5)
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
