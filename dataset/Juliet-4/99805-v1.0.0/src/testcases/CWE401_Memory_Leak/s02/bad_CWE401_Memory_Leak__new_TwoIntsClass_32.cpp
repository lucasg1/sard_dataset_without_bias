namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    data = NULL;
    {
        TwoIntsClass * data = *dataPtr1;
        data = new TwoIntsClass;
        data->intOne = 0;
        data->intTwo = 0;
        printIntLine(data->intOne);
        printIntLine(data->intTwo);
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
<START>
<END>
        ; 
    }
}
} 
