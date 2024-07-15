namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = new int[10];
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
            printIntLine(data[i]);
<END>
        }
    }
    delete [] data;
}
} 
