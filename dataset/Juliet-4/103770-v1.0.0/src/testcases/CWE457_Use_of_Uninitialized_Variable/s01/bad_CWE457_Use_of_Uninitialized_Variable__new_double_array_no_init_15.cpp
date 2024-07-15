namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = new double[10];
    switch(6)
    {
    case 6:
        ; 
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
    {
        int i;
        for(i=0; i<10; i++)
        {
<START>
            printDoubleLine(data[i]);
<END>
        }
    }
    delete [] data;
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
