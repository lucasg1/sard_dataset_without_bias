namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new twoIntsStruct;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        delete [] data;
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
