void FUN0()
{
    int i,k;
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    for(i = 0; i < 1; i++)
    {
        ; 
    }
    for(k = 0; k < 1; k++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}
void FUN1()
{
    int h,j;
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    for(h = 0; h < 1; h++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                data[i] = i;
            }
        }
    }
    for(j = 0; j < 1; j++)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
                printIntLine(data[i]);
            }
        }
    }
}
