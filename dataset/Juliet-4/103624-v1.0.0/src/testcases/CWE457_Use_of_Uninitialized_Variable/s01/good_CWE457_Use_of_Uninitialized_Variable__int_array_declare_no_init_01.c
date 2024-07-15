void FUN0()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
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
void FUN1()
{
    int * data;
    int dataUninitArray[10];
    data = dataUninitArray;
    ; 
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
