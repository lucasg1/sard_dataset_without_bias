namespace NAMESPACE0
{
void FUN0()
{
    TwoIntsClass * data;
    TwoIntsClass * *dataPtr1 = &data;
    TwoIntsClass * *dataPtr2 = &data;
    {
        TwoIntsClass * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        TwoIntsClass * data = *dataPtr2;
<START>
        printIntLine(data->intOne);
<END>
        delete data;
    }
}
} 
