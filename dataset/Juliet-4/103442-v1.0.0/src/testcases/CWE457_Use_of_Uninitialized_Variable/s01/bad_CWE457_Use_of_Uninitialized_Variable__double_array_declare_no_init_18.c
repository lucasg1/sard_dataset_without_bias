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
<START>
            printDoubleLine(data[i]);
<END>
        }
    }
}
