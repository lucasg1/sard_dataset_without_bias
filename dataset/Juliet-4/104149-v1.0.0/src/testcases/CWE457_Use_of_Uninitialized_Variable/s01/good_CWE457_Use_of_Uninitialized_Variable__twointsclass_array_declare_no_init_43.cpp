namespace NAMESPACE0
{
void FUN0(TwoIntsClass * &data)
{
    for(int i=0; i<10; i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    FUN0(data);
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}
void FUN2(TwoIntsClass * &data)
{
    ; 
}
void FUN3()
{
    TwoIntsClass * data;
    TwoIntsClass dataUninitArray[10];
    data = dataUninitArray;
    FUN2(data);
    for(int i=0; i<10; i++)
    {
        data[i].intOne = i;
        data[i].intTwo = i;
    }
    for(int i=0; i<10; i++)
    {
        printIntLine(data[i].intOne);
        printIntLine(data[i].intTwo);
    }
}
} 
