namespace NAMESPACE0
{
void FUN0()
{
    int i,j;
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(malloc(10*sizeof(TwoIntsClass)));
    if (data == NULL) {exit(-1);}
    for(i = 0; i < 1; i++)
    {
        ; 
    }
    for(j = 0; j < 1; j++)
    {
        for(int i=0; i<10; i++)
        {
<START>
            printIntLine(data[i].intOne);
            printIntLine(data[i].intTwo);
<END>
        }
    }
}
} 
