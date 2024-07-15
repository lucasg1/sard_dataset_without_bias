namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    switch(6)
    {
    case 6:
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
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
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
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
