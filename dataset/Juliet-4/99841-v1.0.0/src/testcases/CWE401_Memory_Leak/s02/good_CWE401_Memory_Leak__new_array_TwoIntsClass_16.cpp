namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass[100];
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
        break;
    }
    while(1)
    {
        delete[] data;
        break;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        TwoIntsClass VAR1[100];
        data = VAR1;
        data[0].intOne = 0;
        data[0].intTwo = 0;
        printIntLine(data[0].intOne);
        printIntLine(data[0].intTwo);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
