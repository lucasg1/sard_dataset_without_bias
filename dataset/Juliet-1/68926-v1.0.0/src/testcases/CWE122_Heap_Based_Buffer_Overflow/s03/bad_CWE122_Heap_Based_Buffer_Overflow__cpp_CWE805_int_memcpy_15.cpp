namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = new int[50];
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    {
        int source[100] = {0}; 
<START>
        memcpy(data, source, 100*sizeof(int));
<END>
        printIntLine(data[0]);
        delete [] data;
    }
}
} 
