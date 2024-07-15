namespace NAMESPACE0
{
void FUN0(twoIntsStruct * &data)
{
    {
        int i;
        for(i=0; i<(10/2); i++)
        {
            data[i].intOne = i;
            data[i].intTwo = i;
        }
    }
}
void FUN1()
{
    twoIntsStruct * data;
    data = new twoIntsStruct[10];
    FUN0(data);
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
}
} 
