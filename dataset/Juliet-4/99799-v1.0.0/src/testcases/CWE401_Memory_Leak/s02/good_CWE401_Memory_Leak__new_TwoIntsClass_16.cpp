namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        data = new TwoIntsClass;
        data->intOne = 0;
        data->intTwo = 0;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
void FUN1()
{
    TwoIntsClass * data;
    data = NULL;
    while(1)
    {
        TwoIntsClass VAR1;
        data = &VAR1;
        data->intOne = 0;
        data->intTwo = 0;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
} 
