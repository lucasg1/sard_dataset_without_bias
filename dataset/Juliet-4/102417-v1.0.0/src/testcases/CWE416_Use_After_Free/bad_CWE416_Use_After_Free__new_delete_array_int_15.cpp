namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
<START>
        printIntLine(data[0]);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
} 
