namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    for(int i=0; i<(10/2); i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = reinterpret_cast<TwoIntsClass *>(ALLOCA(10*sizeof(TwoIntsClass)));
    FUN0(data);
    for(int i=0; i<10; i++)
    {
<START>
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
<END>
    }
}
} 
