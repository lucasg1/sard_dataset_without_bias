namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL; 
    switch(6)
    {
    case 6:
    {
        TwoIntsClass * dataBuffer = (TwoIntsClass *)ALLOCA(100*sizeof(TwoIntsClass));
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                dataBuffer[i].intOne = 1;
                dataBuffer[i].intTwo = 1;
            }
        }
        data = dataBuffer;
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    printIntLine(data[0].intOne);
<START>
    delete [] data;
<END>
}
} 
