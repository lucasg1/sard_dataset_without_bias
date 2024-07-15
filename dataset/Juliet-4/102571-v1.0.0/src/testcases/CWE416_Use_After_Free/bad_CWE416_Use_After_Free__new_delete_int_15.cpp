namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int;
        *data = 5;
        delete data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printIntLine(*data);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
