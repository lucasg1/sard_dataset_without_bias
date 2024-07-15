namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    {
        int * dataCopy = data;
        int * data = dataCopy;
<START>
<END>
        ; 
    }
}
} 
