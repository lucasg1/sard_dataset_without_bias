namespace NAMESPACE0
{
void FUN0(double * &data)
{
    ; 
}
void FUN1()
{
    double * data;
    double dataUninitArray[10];
    data = dataUninitArray;
    FUN0(data);
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
} 
