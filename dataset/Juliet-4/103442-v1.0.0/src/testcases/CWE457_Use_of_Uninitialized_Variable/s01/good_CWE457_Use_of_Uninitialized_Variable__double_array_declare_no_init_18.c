void FUN0()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    goto source;
source:
    ; 
    goto sink;
sink:
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
}
void FUN1()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    goto source;
source:
    {
        int i;
        for(i=0; i<10; i++)
        {
            data[i] = (double)i;
        }
    }
    goto sink;
sink:
    {
        int i;
        for(i=0; i<10; i++)
        {
            printDoubleLine(data[i]);
        }
    }
}
