namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    twoIntsStruct * *dataPtr1 = &data;
    twoIntsStruct * *dataPtr2 = &data;
    data = NULL;
    {
        twoIntsStruct * data = *dataPtr1;
        data = new twoIntsStruct;
        data->intOne = 0;
        data->intTwo = 0;
        printStructLine(data);
        *dataPtr1 = data;
    }
    {
        twoIntsStruct * data = *dataPtr2;
<START>
<END>
        ; 
    }
}
} 
